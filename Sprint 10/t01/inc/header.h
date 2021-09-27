#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include <stdlib.h>

void mx_printerr(const char*s);
int mx_strlen(const char *s);

#endif
