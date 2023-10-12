#include <stdarg.h>
#include "variadic_functions.h"

int _putchar(char c)  // Rename to _putchar to match requirements
{
    write(1, &c, 1);
    return 1;
}

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        str = va_arg(args, char *);
        if (i > 0 && separator != NULL) {
            print_separator(separator);
        }
        if (str != NULL) {
            print_string(str);
        } else {
            print_string("(nil)");
        }
    }

    va_end(args);

    print_newline();
}

void print_separator(const char *separator)
{
    while (*separator) {
        _putchar(*separator);
        separator++;
    }
}

void print_string(const char *str)
{
    while (*str) {
        _putchar(*str);
        str++;
    }
}

void print_newline(void)
{
    _putchar('\n');
}
