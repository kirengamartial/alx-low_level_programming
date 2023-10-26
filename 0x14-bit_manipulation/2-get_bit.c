#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the number whose bits will be evaluated
 * @index: index of bit to be evaluated
 * Return: 0 or 1 for sucess -1 for fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifted;
	int state;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	shifted = n >> index;
	state = shifted & 1;
	return (state);
}
