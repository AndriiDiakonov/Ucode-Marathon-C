#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "mx_printchar.h"
#include "mx_printint.h"

void mx_print_arr_int(const int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        mx_printint(arr[i]);
        mx_printchar('\n');
    }

}
