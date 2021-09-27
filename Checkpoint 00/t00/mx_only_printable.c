#include <stdio.h>
#include <unistd.h>

void mx_only_printable(void)
{
    char prov[] = "text off";
    int is = sizeof(prov);
    for (int i = is; i >= 0; i--)
    {
        write(1, &prov[i], 1);
    }
    printf("\n");
}
