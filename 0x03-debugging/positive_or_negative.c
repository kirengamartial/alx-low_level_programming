#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - checks if a number is positive or negative
 * @i: The number to be checked
 *
 * Return: No return value (void)
 */
void positive_or_negative(int i)
{
    if (i > 0)
    {
        puts("Positive");
    }
    else if (i < 0)
    {
        puts("Negative");
    }
    else
    {
        puts("Zero");
    }
}
