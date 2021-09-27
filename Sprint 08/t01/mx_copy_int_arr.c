#include "duplicate.h"

int *mx_coppy_int_arr(const int *src, int size)
{
    if(src == NULL)
        return NULL;
    int *p = malloc(size * sizeof(int));
    if(p)
        for(int i = 0; (i++) < size; p[i] = src[i]);
    return p;
}
