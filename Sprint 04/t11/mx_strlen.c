int mx_strlen(const char *s)
{
    int i = 0;

    if(!s)
        return 0;
    while(s[i])
        i++;
    i = i - 1;
    return i; 
}
