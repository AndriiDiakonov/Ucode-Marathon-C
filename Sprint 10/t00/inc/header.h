#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <stdlib.h>

int mx_filelen(int file);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
void mx_printstr(const char *s);

#endif 
