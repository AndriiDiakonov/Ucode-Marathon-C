#include <stdio.h>

int mx_gcd(int a, int b)
{
    if(a < 0)
        a = -a;
    if(b < 0)
        b = -b;
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    if(a > b)
        return mx_gcd(b, a % b);
    else if (a < b)
        return mx_gcd(a, b % a);
    else 
        return a;
}
