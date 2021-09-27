#include <stdlib.h>

char *mx_strnew(const int size) {
    int i = 0;
    char *memory = NULL;
    if (size < 0)
        return NULL;
    memory = (char *)malloc((size + 1));
    for (i = 0; i < size; i++)
        memory[i] = '\0';
    memory[i] = '\0';
    return memory;
}
