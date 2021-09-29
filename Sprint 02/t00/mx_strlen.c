int mx_strlen(const char *s);

void mx_printstr(const char *);

int mx_strlen(const char *b) {
    int i = 0;
    if (!b)
        return 0;
    while (b[i])
        i++;
    return i;
} 
