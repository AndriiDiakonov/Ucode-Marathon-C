#ifndef CREATE_AGENT_H
#define CREATE_AGENT_H

#include <stdio.h>
#include <stdlib.h>
#include "agent.h"

char *mx_strnew(const int);

char *mx_strcpy(char *dst, const char *src);

unsigned long mx_strlen(const char *s);

char *mx_strdup(const char *str);

t_agent *mx_create_agent(char*, int, int);

#endif
