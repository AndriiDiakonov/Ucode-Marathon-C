int mx_strlen(const char *b) {
    int i = 0;
    
    if (!b)
        return 0;
    while (b[i])
        i++;
    return i;
} 