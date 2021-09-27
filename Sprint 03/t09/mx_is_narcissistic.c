#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#include "mx_pow.h"

bool mx_is_narcissistic(int num)
{
    int m, sum, k;
    m = num;
    k = floor(log10(num)) + 1;
    sum = 0;
    while (num > 0) {
        sum += mx_pow(num % 10, k);
        num /= 10;
    }
    if (m == sum)
        return true;
    return false;
}