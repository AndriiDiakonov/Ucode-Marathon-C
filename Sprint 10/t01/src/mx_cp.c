#include "../inc/header.h"

static int check_error_argc(int argc_c, char *argv_v[]) {
    if (argc_c != 3) {
        mx_printerr("usage: ");
        mx_printerr(argv_v[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        return -1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int text_out;
    int text_input;
    char buffer;

    if (check_error_argc(argc, argv) < 0)
        return -1;
    text_out = open(argv[1], O_RDONLY);
    if (text_out < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        return -1;
    }
    text_input = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
    while (read(text_out, &buffer, 1))
        write(text_input, &buffer, 1);
    close(text_out);
    close(text_input);
    exit(0);
}
