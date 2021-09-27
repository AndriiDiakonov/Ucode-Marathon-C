#include <stdio.h>

void mx_deref_pointer(char ******str) 
{
    static char msg[] = "Follow the white rabbit!"; 
    *****str = msg;
}
