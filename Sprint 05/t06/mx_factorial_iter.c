#include <stdio.h>
#include <limits.h>

int mx_factorial_iter(int n)
{
    int res = 1;
    if(n < 0)
        return 0;
    if(n >= INT_MAX)
        return 0;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
