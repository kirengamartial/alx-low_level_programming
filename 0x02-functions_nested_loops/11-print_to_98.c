#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            /* Print the number */
            if (n < 10 && n >= 0)
                _putchar(n + '0');
            else if (n < 0)
            {
                _putchar('-');
                if (n > -10)
                    _putchar(-n + '0');
                else
                {
                    _putchar(-n / 10 + '0');
                    _putchar(-n % 10 + '0');
                }
            }
            else
            {
                _putchar(n / 10 + '0');
                _putchar(n % 10 + '0');
            }

            /* Print comma and space if not the last number */
            if (n != 98)
                _putchar(',');

            /* Increment n */
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            /* Print the number */
            if (n < 10 && n >= 0)
                _putchar(n + '0');
            else if (n < 0)
            {
                _putchar('-');
                if (n > -10)
                    _putchar(-n + '0');
                else
                {
                    _putchar(-n / 10 + '0');
                    _putchar(-n % 10 + '0');
                }
            }
            else
            {
                _putchar(n / 10 + '0');
                _putchar(n % 10 + '0');
            }

            /* Print comma and space if not the last number */
            if (n != 98)
                _putchar(',');

            /* Decrement n */
            n--;
        }
    }

    /* Print newline character at the end */
    _putchar('\n');
}
