#ifndef HEADER_H
#define HEADER_H

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <unistd.h>

unsigned int mx_strlen(char *s);
void mx_text_start();
void mx_color();
void mx_matrix();

#endif
