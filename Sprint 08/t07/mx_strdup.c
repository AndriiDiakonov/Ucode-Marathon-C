#include "create_new_agents.h"

char *mx_strdup(const char *str) 
{
    char *duplicate = mx_strnew(mx_strlen(str));
    mx_strcpy(duplicate, str);
    return duplicate;
}
