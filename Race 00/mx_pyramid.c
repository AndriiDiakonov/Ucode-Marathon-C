void mx_printchar(char c);

void mx_pyramid(int n) {
    int i, j;
    int k;
    if (n < 2 || n % 2 != 0) 
    {
        return;
    }
    char pyramid[n][n * 2];
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n * 2; j++) 
        {
            pyramid[i][j] = ' ';
        }
    }
    i = n - 1;
    for (j = 1; j <= 2 * n - 3; j++)
        pyramid[i][j] = '_';
    for (j = 0; j < n; j++) 
    {
	    pyramid[i][j] = '/';
        i--;
    }
    i = n - 1;
    for (j = n * 2 - 2; j > n - 1; j--) 
    {
	    pyramid[i][j] = '\\';
        i--;
    }
    j = n * 2 - 1;
    for (i = n - 1; i > n / 2 - 1; i--)
	    pyramid[i][j] = '|';
    i = n - n / 2 - 1;
    for (j = n * 2 - 2; j > n - 1; j -= 2) {
	    pyramid[i][j] = '\\';
        i--;
    }
    
    k = n;

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n * 2; j++) 
        {
            if (j < k + 1)
            mx_printchar(pyramid[i][j]);
                else if (j > k && i > n / 2)
            mx_printchar(pyramid[i][j]);
        }
        mx_printchar('\n');
        k += 2;
    }
}

