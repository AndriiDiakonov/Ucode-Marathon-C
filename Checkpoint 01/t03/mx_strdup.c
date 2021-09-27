#include <stdlib.h>

static char *mx_strnew(const int size) {
    int i = 0;
    char *memory = NULL;
    if (size < 0)
        return NULL;
    memory = (char *)malloc((size + 1));
    for (i = 0; i < size; i++)
        memory[i] = '\0';
    memory[i] = '\0';
    return memory;
}

static char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    for(i = 0; src[i]; i++)
        dst[i] = src[i];
    dst[i] = '\0';
    return dst;
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
