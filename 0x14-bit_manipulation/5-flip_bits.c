#include "main.h"

/**
 * flip_bits - evaluates number of bits to be flipped to find a number
 * @n: first integer
 * @m: second integer
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	unsigned int result;

	count = 0;
	result = n ^ m;
	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}
	return (count);
}
