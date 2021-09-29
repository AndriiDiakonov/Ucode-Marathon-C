#include <stdlib.h>

static char *mx_strcpy(char *dst, const char*src) {
    int i = 0;
    while (src[i]) {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;    
}

static char *mx_strnew(const int size) {
    if (size <= 0) return NULL;
    char* string = malloc(size + 1);
    for (int i = 0; i < size + 1; ++i) {
        string[i] = '\0';
    }
    return string;
}

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
