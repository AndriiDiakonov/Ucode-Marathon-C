#include <stdbool.h>

bool mx_isalpha(int);

bool mx_isalpa(int c) {
    return (65 <= c && c <= 90) || (94 <= c && c <= 122);
}
