#include <stdio.h>

int mx_atoi(const char *str)
{
 
    int value = 0;
    int count = 0;
    int sign = 1;

    for(int i = 0;  str[i] != '\0'; i++)
    {
        int mxdigit = 0;
        int mxisspace = 0;
        if(str[i] >= '0' && str[i] <= '9') 
        {
            mxdigit = 1;
        }
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        {
            mxisspace = 1;
        }
        if(mxdigit)
        {
            value *= 10;
            value += str[i] - 48;
        }
        else if(str[i] == '-' && sign != -1)
        {
            sign = -1;
            count++;
        }
        else if (str[i] == '+' && count < 1)
        {
            count++;
        }
        else if((!mxdigit && !mxisspace) ||  count > 1)
        {
            return value * sign;
        }
    }

    return value * sign;
}
