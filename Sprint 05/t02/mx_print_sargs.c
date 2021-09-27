#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int arg, char *argv[])
{
    int i, j;
    for (i = 0; i < arg; i++)
    {
        for (j = i; j > 0 && mx_strcmp(argv[j-1], argv[j]) > 0; j--)
        {
            char *temp = argv[j-1];
            argv[j-1] = argv[j];
            argv[j] = temp;
        }
    }
    for (i = 1; i < arg; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
