#include "../inc/header.h"

int mx_atoi(const char *str) {
    int value = 0;
    int count = 0;
    int sign = 1;
    int i = 0;
    for (i = 0;  str[i] != '\0'; i++) {
        if (mx_isdigit(str[i])) {
            value *= 10;
            value += str[i] - 48;
        }
        else if (str[i] == '-' && sign != -1) {
            sign = -1;
            count++;
        }
        else if (str[i] == '+' && count < 1) {
            count++;
        }
        else if ((!mx_isdigit(str[i]) && !mx_isspace(str[i])) ||  count > 1) {
            return value * sign;
        }
    }
    return value * sign;
}


