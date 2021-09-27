#include <stdio.h>
#include "mx_strncmp.h"
#include "mx_strlen.h"
#include "mx_strchr.h"
#include "mx_strstr.h"

int mx_count_substr(const char *str, const char *sub)
{
    int value = 0;
    int i = 0;
    int sign = mx_strlen(sub);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(mx_strstr(str + 1, sub) != 0)
        {
            i = mx_strstr(str + 1, sub) - str + sign;
            value++;
        }
    }
    return value;
}
