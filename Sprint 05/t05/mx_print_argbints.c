#include <stdio.h>

int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int m);

int main(int arg, char *argv[]) 
{
    for (int i = 1; i < arg; i++) 
    {
        int number = mx_atoi(argv[i]);
        long power = 0;

        if (number < 0) 
            mx_printint(1);
        else 
            mx_printint(0);

        for (power = (1 << 30) ; power > 0; power >>= 1) 
        {
            if ( (number & power) != 0) 
            {
                mx_printint(1);
            } 
            else 
            {
                mx_printint(0);
            }
        }
        mx_printchar('\n');
    }
}
