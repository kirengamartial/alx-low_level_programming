#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);  // Rename to _putchar to match requirements
void print_strings(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
