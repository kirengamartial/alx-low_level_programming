#include "main.h"
#include <unistd.h>

/**
 * positive_or_negative - prints whether a number is positive, negative, or zero
 * @i: the number to check
 */
void positive_or_negative(int i)
{
    char *message;

    if (i == 0)
        message = "0 is zero\n";
    else if (i > 0)
        message = "0 is positive\n";
    else
        message = "0 is negative\n";

    write(1, message, 14); /* Using write to print the message */
}
