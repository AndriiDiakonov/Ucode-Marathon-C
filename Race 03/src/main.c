#include "../inc/header.h"

int main(int argc, char *argv[]) {
    initscr();
    if (argc == 2) {
        if (mx_strlen(argv[1]) == 2 && (argv[1])[0] == '-' && (argv[1])[1] == 's')
            mx_matrix();
        else
            write(2, "usage: ./matrix_rain [-s]\n", 26);
    } 
    else if (argc == 1) {
        mx_text_start();
        mx_matrix();
    }
    else {
        write(2, "usage: ./matrix_rain [-s]\n", 26);
    }
    endwin();
    return 0;
}
