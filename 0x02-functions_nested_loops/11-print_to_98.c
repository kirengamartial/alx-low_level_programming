#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to print.
 */
void print_times_table(int n)
{
    if (n >= 0 && n <= 15)
    {
        int i, j, result;

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                result = i * j;

                if (j == 0)
                {
                    _putchar('0' + result);
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');

                    if (result < 10)
                    {
                        _putchar(' '); // Add an extra space for single-digit numbers
                        _putchar(' '); // Add an extra space for single-digit numbers
                    }
                    else if (result < 100)
                    {
                        _putchar(' '); // Add an extra space for double-digit numbers
                    }

                    if (result >= 100)
                    {
                        _putchar((result / 100) + '0');
                        _putchar(((result / 10) % 10) + '0');
                    }
                    else
                    {
                        _putchar((result / 10) + '0');
                    }

                    _putchar((result % 10) + '0');
                }
            }
            _putchar('\n');
        }
    }
}
