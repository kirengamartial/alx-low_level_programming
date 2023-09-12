#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8; /* Handle INT_MIN as a special case */
	}
	else
	{
		if (n < 0)
			n = -n; /* Make sure n is positive */
		last_digit = n % 10;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
