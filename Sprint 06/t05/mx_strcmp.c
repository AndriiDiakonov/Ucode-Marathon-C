int mx_strcmp(const char *s1, const char *s2)
{
    int count = 0;
    int count2 = 0;
    int len = 0;
    while (s1[count])
    {
        count++;
    }
    while (s2[count2])
    {
        count2++;
    }
    if (count>count2)
    {
        len=count;
    }
    else
    {
        len=count2;
    }
    for (int i = 0; i<len; i++)
    {	
        if (s1[i]!=s2[i])
        {
            if (s1[i]>s2[i])
            {
                return 1;
                break;
            }
            else if (s1[i]<s2[i])
            {
                return -1;
                break;
            }	
        }
    }
    return 0;
}
