#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n <= 98)
        {
            _putchar((n / 10) + '0'); /* Print the tens digit */
            _putchar((n % 10) + '0'); /* Print the ones digit */
            if (n != 98)
            {
                _putchar(','); /* Print a comma */
                _putchar(' '); /* Print a space */
            }
            n++;
        }
    }
    else
    {
        while (n >= 98)
        {
            _putchar((n / 10) + '0'); /* Print the tens digit */
            _putchar((n % 10) + '0'); /* Print the ones digit */
            if (n != 98)
            {
                _putchar(','); /* Print a comma */
                _putchar(' '); /* Print a space */
            }
            n--;
        }
    }
    _putchar('\n');
}
