#include <stdio.h>
#include <stdbool.h>
#include "mx_pow.h"

bool mx_is_mersenne(int n) {
    for (int i = 2; i <= mx_pow(2,mx_pow(2 - 1,n)) - 1; i++) {
        if (n % i == 0 && i != n) return false;
    }
    return true;
}