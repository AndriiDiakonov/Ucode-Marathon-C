#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s)
{
    int i = 0;
    if (!s)
    {
        i = 0;
    }
    while (s[i])
    {
        i++;
    }

    write(1, s, i);
}
