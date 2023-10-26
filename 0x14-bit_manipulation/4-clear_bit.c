#include "main.h"
#include <math.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the integer whose bit will be changed
 * @index: iindex of the bit to be changed
 * Return: 1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int checker;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	checker = 1;
	checker = checker << index;
	checker = ~checker;
	*n = *n & checker;
	return (1);
}
