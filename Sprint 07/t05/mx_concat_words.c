#include <stdio.h>
#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strjoin(const char *s1, const char *s2);
void mx_strdel(char **str);

char *mx_concat_words(char **words) 
{
    if (words == NULL || words[0] == 0)
        return NULL;
    char *rez = mx_strdup(words[0]), *t;
    for (int i = -1; words[++i] != NULL; mx_strdel(&t)) 
    {
        t = rez;
        rez = mx_strjoin(rez, mx_strjoin(mx_strdup(" "), mx_strdup(words[i])));
    }
    return rez;
}
