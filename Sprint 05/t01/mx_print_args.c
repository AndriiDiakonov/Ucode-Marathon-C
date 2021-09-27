#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int arg, char *argv[])
{
    for (int i = 1; i < arg; i++)
    {
 		mx_printstr(argv[i]);
		mx_printchar('\n');
    }
}
