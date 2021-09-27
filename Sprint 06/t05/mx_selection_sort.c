#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size) 
{ 
    int i, j, min, check = 0;
    char *temp; 
    for (i = 0; i < size - 1; i++) 
    { 
        min = i; 
        for (j = i + 1; j < size; j++) 
        {
            if (mx_strlen(arr[j]) < mx_strlen(arr[min]))
            {
                min = j; 
            }
            else if ((mx_strlen(arr[j]) == mx_strlen(arr[min])) && ((mx_strcmp(arr[j],arr[min])) == -1))
            {
                min = j; 
            }  
        } 
        if (mx_strcmp(arr[i],arr[min]) != 0)
        { 
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            check++;
        }
    }
    return check; 
}
