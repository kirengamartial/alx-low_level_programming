#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;
    int i;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    print_number(sum);
    print_char('\n');

    return (0);
}
