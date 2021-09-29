#include <stdbool.h>

bool mx_isupper(char);

bool mx_isupper(char c) {
    if ((65 <= c && c <= 90) || (176 <= c && c <= 207) || c == 250) 
        return true;
    else 
        return false;
}
