#include <stdio.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b)
{
    int mult = a * b;
    if (mult < 0)
        mult = -mult;
    return mult / mx_gcd(a, b);
}
