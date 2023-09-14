#include "main.h"

/**
 * positive_or_negative - prints whether a number is positive, negative, or zero
 * @i: The integer to be checked
 *
 * Return: No return value
 */

void positive_or_negative(int i)
{
    if (i > 0)
    {
        custom_puts("Positive\n");
    }
    else if (i == 0)
    {
        custom_puts("Zero\n");
    }
    else
    {
        custom_puts("Negative\n");
    }
}
