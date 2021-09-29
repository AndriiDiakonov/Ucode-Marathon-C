void mx_printchar(char c);

void mx_isos_triangle(unsigned int lenght, char c);

void mx_isos_triangle(unsigned lenght, char c) {
    for (unsigned i = 0; i < lenght; i++) {
        mx_printchar(&c);
        for (unsigned j = 0; j < i; ++j)
            mx_printchar(&c);
        mx_printchar('\n');
    }
}
