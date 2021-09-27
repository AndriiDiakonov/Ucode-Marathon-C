#include <stdio.h>

void leftRotatebyOne(int arr[], int n);
void rightRotatebyOne(int arr[], int n);
void mx_arr_rotate(int *arr, int size, int shift)
{
    if(shift > 0)
    {
        for (int i = 0; i < shift; i++)
            rightRotatebyOne(arr, size);
    }
    else if (shift < 0)
    {    
        for (int i = 0; i > shift; i--)
            leftRotatebyOne(arr, size);
    }
}
void leftRotatebyOne(int arr[], int n) 
{
    int temp = arr[0], j;
    for (j = 0; j < n - 1; j++)
        arr[j] = arr[j + 1];
    arr[j] = temp;
}
void rightRotatebyOne(int arr[], int n) 
{
    int temp = arr[n-1], j;
    for (j = n-1; j > 0; j--)
        arr[j] = arr[j - 1];
    arr[j] = temp;
}
