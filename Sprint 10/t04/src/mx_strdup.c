#include "../inc/header.h"

char *mx_strdup(const char *s1) {
    int j = 0; 
    char i = s1[0];
    while (i != '\0') {
        j++;
        i = s1[j];
    }
    char *duplicate = mx_strnew(j);
    mx_strcpy(duplicate, s1);
    return duplicate;
}
