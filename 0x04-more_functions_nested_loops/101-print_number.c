#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int i;

	if (n < 0)
	{
		_putchar('-');
	}

	for (i = n; i > 9 || i < -9; i /= 10)
	{
		divisor *= 10;
	}

	for (; divisor >= 1 || divisor <= -1; divisor /= 10)
	{
		int digit = n / divisor;

		if (digit < 0)
		{
			digit *= -1;
		}

		_putchar(digit + '0');
		n -= digit * divisor;
	}
}
