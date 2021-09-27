#include <stdio.h>

int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size)
{
    int i, j;
    char *t;
    int check = 0;
    for (i = 0; i < size; i++)
    {
        t = arr[i];
        j = i - 1;
        while(j >= 0 && mx_strlen(arr[j]) > mx_strlen(t))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            check++;
        }
        arr[j + 1] = t;
    }
    return check;
}
