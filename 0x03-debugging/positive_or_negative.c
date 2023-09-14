#include "main.h"

/**
 * positive_or_negative - Determines if a number is positive, negative, or zero
 * @i: The number to be checked
 *
 * Description: This function checks whether a number is positive, negative,
 *              or zero and prints the result.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		custom_puts("Positive\n");
	}
	else if (i < 0)
	{
		custom_puts("Negative\n");
	}
	else
	{
		custom_puts("Zero\n");
	}
}
