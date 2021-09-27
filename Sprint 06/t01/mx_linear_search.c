#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s)
{
    int check = 0;
    while(*arr){
        if(mx_strcmp(*arr, s) == 0)
            return check;
        check++; 
        arr++;
    }
    return -1;
}
