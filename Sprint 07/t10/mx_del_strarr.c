#include <stdio.h>
#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr) {
    char **p = *arr;
    while (*p) {
        mx_strdel(p);
        p++;
    }
    *arr = NULL;
}
