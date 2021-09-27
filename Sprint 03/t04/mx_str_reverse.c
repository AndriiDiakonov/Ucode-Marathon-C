#include <stdio.h>
#include "mx_strlen.h"
#include "mx_swap_char.h"

void mx_str_reverse(char *s)
{
    if(*s)
    {
        int len = mx_strlen(s) - 1;
        for (int i = 0; i < len; i++) 
        {
            mx_swap_char(&s[i], &s[len--]);
        }
        for (int i = 0; i < mx_strlen(s); i++)
        {
            printf("%c", s[i]);
        }

        printf("\n"); 
    }
}