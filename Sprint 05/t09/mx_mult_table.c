#include <stdio.h>

void mx_printint(int n);
void mx_printchar(char c);
int mx_strlen(const char *str);
int mx_atoi(const char *s);

int main(int arg, char *argv[])
{
    if (arg != 3)
    {
        return 0;
    }
    if (mx_strlen(*(argv + 1)) != 1 && mx_strlen(*(argv + 2)) != 1)
    {
        return 0;
    }
    int a = mx_atoi(*(argv + 1));
    int b = mx_atoi(*(argv + 2));
    if(a > b)
    {
        b = a + b;
        a = b - a;
        b -= a;
    }
    for (int i = a; i <= b; i++)
    {
        for (int j = a; j <= b; j++)
        {
            mx_printint(i * j);
            if(j < b)
                mx_printchar('\t');
        }
        mx_printchar('\n');
    }
}
