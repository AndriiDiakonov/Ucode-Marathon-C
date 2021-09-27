#include <stdio.h>

int mx_count_words(const char *str, char delimiter)
{
     int value = 0;
     int sign = 0;

     for(int i = 0; str[i] != '\0'; i++)
     {
         if(str[i] != delimiter)
         {
             sign = 1;
         }
         else if(str[i] == delimiter && sign)
         {
             sign = 0;
             value++;
         }
     }
     if(sign)
     {
         value++; 
     }
     return value;
}
