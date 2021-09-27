#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
char *mx_otoa(int num);
int mx_pow(int num, int pow);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strndup(const char *s1, int n);
void mx_str_reverse(char *s);
void mx_swap_char(char *s1, char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strcpy(char *dst, const char *src);
char *mx_strtrim(const char *str);

void mx_prsr(char *argv[], char *operand1, char *operation, char *operand2, char *result);
void mx_opr(char *operand1, char *operation, char *operand2, char *result);

#endif


