#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/* Check if c is a lowercase letter */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
