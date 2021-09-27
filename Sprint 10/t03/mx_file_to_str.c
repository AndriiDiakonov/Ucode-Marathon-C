#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    char *dst = NULL;
    int argument;
    int counter = 0;
    char text;

    argument = open(filename, O_RDONLY);
    while (read(argument, &text, 1))
        counter++;
    close(argument);
    argument = open(filename, O_RDONLY);
    dst = mx_strnew(counter);
    for (int i = 0; read(argument, &text, 1); i++)
        dst[i] = text;
    close(argument);
    return dst;
}
