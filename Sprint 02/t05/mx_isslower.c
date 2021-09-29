#include <stdbool.h>
#include <stdio.h>

bool mx_islower(int);

bool mx_islower(int c) {
    if ((65 <= c && c <= 90) || (176 <= c && c <= 207) || c == 250) 
        return false;
    else 
        return true;
}
