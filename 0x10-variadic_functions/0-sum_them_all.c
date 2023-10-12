#include "variadic_functions.h"
/**
 * sum_them_all - Sums all its parameters
 * @n: no of variable arguments - 1
 * Return: Sum of parameters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	unsigned int x;
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum = sum + x;
	}
	return (sum);
}
