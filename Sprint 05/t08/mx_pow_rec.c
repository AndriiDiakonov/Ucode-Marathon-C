#include <stdio.h>

double mx_pow_rec(double n, unsigned int pow)
{
    int buff = 0;
    if(pow == 0)
    {
        return 1;
    }
    if (pow % 2 == 0)
    {
        buff = mx_pow_rec(n, pow / 2);
        return buff * buff;
    }
    else
    {
        return n * mx_pow_rec(n, pow - 1);
    }
}
