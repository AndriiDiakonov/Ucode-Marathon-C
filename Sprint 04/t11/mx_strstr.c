#include <string.h>

int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2)
{
    int onestring = mx_strlen(s1);
    int twostring = mx_strlen(s2);
    for (int i = 0; i < onestring; i++)
    {
        if (mx_strncmp(&s1[i], s2, twostring) == 0)
        {
            return mx_strchr(&s1[i], s1[i]);
        }
        
    }
    return 0;
}
