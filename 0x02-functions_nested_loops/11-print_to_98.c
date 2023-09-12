#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
				_putchar((i / 10) + '0'); /* Print the tens digit */
			_putchar((i % 10) + '0'); /* Print the ones digit */
			if (i < 98)
			{
				_putchar(','); /* Print a comma */
				_putchar(' '); /* Print a space */
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 98)
				_putchar((i / 10) + '0'); /* Print the tens digit */
			_putchar((i % 10) + '0'); /* Print the ones digit */
			if (i > 98)
			{
				_putchar(','); /* Print a comma */
				_putchar(' '); /* Print a space */
			}
		}
	}
	_putchar('\n');
}
