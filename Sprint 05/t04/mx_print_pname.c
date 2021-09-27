#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main(int arg, char *argv[])
{
    arg++;
    char *s = *argv;
    s = mx_strchr(s, '\0');
    while(*s != '/') 
    {
        s--;
    }
    mx_printstr(s + 1);
    mx_printchar('\n');
}
