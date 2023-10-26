#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: a pointer to a string containing the binary digits
 * Return: the converted number if successful, 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int len;
	int i;

	if (b == NULL)
		return (0);

	len = strlen(b);
	num = 0;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num * 2 + (b[i] - '0');
	}

	return (num);
}
