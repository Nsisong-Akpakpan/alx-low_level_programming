#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
char *make_nil(char *s);
void print_all(const char * const format, ...);
int count_format(const char * const format);
void print_comma(int j, int x);

#endif
