#include "main.h"

/**
 * get_endianness - checks the endianness of a machine
 * Return: 0 for big endian 1 for little endian
 */
int get_endianness(void)
{
	int num;
	char *ptr;

	num = 3;
	ptr = (char *)&num;
	return (*ptr);
}
