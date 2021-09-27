#include <stdio.h>
#include <string.h>
#include <ctype.h>

void mx_str_reverse(char *s)
{
    size_t n = strlen( s );
    char t[n + 1];

    char *p = t;
    char *q = s + n;

    while ( q != s )
    {
        while ( q != s && isblank( *( q - 1 ) ) ) *p++ = *--q;
        char *tmp = q;
        while ( tmp != s && !isblank( *( tmp - 1 ) ) ) --tmp;
        memcpy( p, tmp, q - tmp );
        p += q - tmp;
        q = tmp;
    }

    *p = '\0';

    puts(t);
}
