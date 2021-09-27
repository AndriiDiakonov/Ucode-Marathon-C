#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_matrix_voice() {
    char text[10] = "\a%\n"; 
    write(1, &text, strlen(text));
}

