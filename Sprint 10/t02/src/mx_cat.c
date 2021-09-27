#include "inc/header.h"

int main(int argc, char *argv[]) {
    char text;
    int argument;

    if (argc == 1) {
        while (read(0, &text, 1))
            write(1, &text, 1);
    }
    for(int i = 1; i < argc; i++) {
        argument = open(argv[i], O_RDONLY);
        if (argument < 0) {
            write(2, "mx_cat: ", 8);
            write(2, argv[i], mx_strlen(argv[i]));
            write(2, ": No such file or directory\n", 28);
        }
        else
            while (read(argument, &text, 1))
                write(1, &text, 1);
        close(argument);
    }
    exit(0);
}
