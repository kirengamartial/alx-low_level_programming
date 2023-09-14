#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int result1, result2;

    result1 = mul(98, 1024);
    result2 = mul(-402, 4096);

    /* Call your custom print_number function to display the results */
    print_number(result1);
    print_char('\n');
    print_number(result2);
    print_char('\n');

    return (0);
}
