#include <stdio.h>
#include <string.h>

void mx_is_positive(int);
int mx_strlen(const char *b);
void mx_printstr(const char *s);

void mx_is_positive (int i) {
    char is[256]; 
    if (i > 0)
        strcpy(is, "positive");
    if (i == 0)
        strcpy(is, "zero");
    if (i < 0)
        strcpy(is, "negative");
    mx_printstr(is);
    printf("\n");
} 
