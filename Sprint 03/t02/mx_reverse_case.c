#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

#include "mx_strlen.h"
#include "mx_tolower.h"
#include "mx_toupper.h"
#include "mx_islower.h"
#include "mx_isupper.h"

void mx_reverse_check(char *s)
{
    for (int i = 0; i < mx_strlen(s); i++)
    {
        if (mx_islower(s[i]) == 1)
        {
            printf("%c", mx_toupper(s[i]));
        }
        else if(mx_islower(s[i]) == 0 && mx_isupper(s[i]) == 0)
        {
            printf(" ");
        }
        else if(mx_isupper(s[i]) == 1)
        {
             printf("%c", mx_tolower(s[i]));
        }
        
    }
    printf("\n");
}
