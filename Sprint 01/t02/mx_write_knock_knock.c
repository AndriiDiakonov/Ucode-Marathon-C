#include <string.h>
#include <unistd.h>

void mx_write_knock_knock() {
    char text[100] = "Follow the white rabbit.\nKnock, Knock, neo.\n";
    write(1, &text, strlen(text));
}

