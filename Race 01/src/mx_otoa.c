#include "../inc/header.h"

static int num_size(int num) {
    int size = 0;
    while (num) {
        num /= 10;
        ++size;
    }
    return size;
}

char *mx_otoa(int num)  {
    char *result = NULL;
    int size = num_size(num);
    int temp = num;
    result = mx_strnew(size);
    if (num == 0) {
        return mx_strcpy(result, "0");
    }
    if (num == -2147483648) {
        return mx_strcpy(result, "-2147483648");
    }
    temp = num;
    for (int i = 0; i < size; i++) {
        if (temp < 0) {
            result[size] = '-';
            temp = -temp;
        }
        result[i] = (temp % 10) + '0';
        temp /= 10;
    }
    mx_str_reverse(result);
    return result;
}


