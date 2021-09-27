#include <stdio.h>
#include <stdbool.h>

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *str);

int main(int arg, char *argv[])
{
    if (arg > 1) 
    {
        int sum = 0;
        for (int i = 1; i < arg; i++) 
        {
            int num = 1;
            char *tstring = argv[i];
            if (*tstring == '+' || *tstring == '-') 
                tstring++;
            if ( mx_isdigit(*tstring) || *tstring == '+' || *tstring == '-' ) 
            {
                while (*tstring != '\0')
                {   
                    if ( !mx_isdigit(*tstring) ) 
                    {
                        num = 0;
                    }
                    tstring++;
                }
                if (num) 
                {
                    tstring = argv[i];
                    sum += mx_atoi(tstring);
                }
            }
        }
        mx_printint(sum);
        mx_printchar('\n');
    }
}
