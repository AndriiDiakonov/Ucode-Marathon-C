#include <unistd.h>
#include <string.h>

void mx_printchar(char c);

void mx_only_printable() {
    char prov[] = "text of";
    int is = sizeof(prov); 
    for (int i = is; i >= 0; i--) {
         mx_printchar(prov[i]);
    }
    printf("\n");
}

