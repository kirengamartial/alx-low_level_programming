#include "main.h"

/**
 * fizz_buzz - prints Fizz-Buzz
 */
void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
            print_str("Fizz");
        if (i % 5 == 0)
            print_str("Buzz");
        if (i % 3 != 0 && i % 5 != 0)
            print_int(i);

        if (i < 100)
            _putchar(' ');
        else
            _putchar('\n');
    }
}

/**
 * print_str - prints a string
 * @str: the string to print
 */
void print_str(char *str)
{
    while (*str)
    {
        _putchar(*str);
        str++;
    }
}

/**
 * print_int - prints an integer
 * @n: the integer to print
 */
void print_int(int n)
{
    if (n / 10)
        print_int(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
