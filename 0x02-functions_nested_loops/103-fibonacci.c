#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    long int prev = 1;
    long int curr = 2;
    long int next;
    long int sum = 2; // Start with 2 to account for the initial even value (2)

    while (1)
    {
        next = prev + curr;
        if (next > 4000000)
            break;

        if (next % 2 == 0)
            sum += next;

        prev = curr;
        curr = next;
    }

    print_number(sum);
    print_char('\n');

    return (0);
}
