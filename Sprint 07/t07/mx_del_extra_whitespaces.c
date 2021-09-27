#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int mx_strlen(const char *s);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char*src);
void mx_strdel(char **str);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str) 
{
    if (str == NULL) return NULL;

    char *temp = mx_strnew(mx_strlen(str));

    int k = 0;
    for (int i = 0; str[i]; i++) {
        if (mx_isspace(str[i]) && !mx_isspace(str[i - 1])) 
        {
            temp[k] = ' ';
            k++;
        }
        else if (!mx_isspace(str[i])) 
        {
            temp[k] = str[i];
            k++;
        }
    }

    char *trimed = mx_strtrim(temp);
    mx_strdel(&temp);

    return trimed;
}
