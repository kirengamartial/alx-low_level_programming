#include <stdio.h>
#include <string.h>
/**
  * _memset - fills memory with a constant byte
  * @s: the memory area being filled
  * @b: the constant byte
  * @n: no. of bytes to be copied
  * Return: a pointer to the filled memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
