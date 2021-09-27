#include <stdio.h>
#include <unistd.h>

void mx_printint(int n) 
{
    if (n == -2147483648) 
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) 
    {
        const char minus = '-';
        write(1, &minus, 1);
        n *= -1;
    }
    if (n > 9)
    mx_printint(n / 10);
    int cn = n % 10 + 48;
    write(1, &cn, 1);
}
