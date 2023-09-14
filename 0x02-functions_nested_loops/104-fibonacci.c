#include "main.h"

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
    unsigned long a = 1, b = 2, sum;
    int count;

    /* Print the first two Fibonacci numbers manually */
    print_number(a);
    print_char(',');
    print_char(' ');
    print_number(b);

    for (count = 2; count < 98; count++)
    {
        sum = a + b;

        if (count != 97) // Don't print comma after the last number
        {
            print_char(',');
            print_char(' ');
        }

        print_number(sum);

        a = b;
        b = sum;
    }

    print_char('\n');
}

/* Custom function to print a number */
void print_number(unsigned long n)
{
    unsigned long num = n;
    unsigned long divisor = 1;

    /* Calculate the divisor */
    while (num / divisor >= 10)
    {
        divisor *= 10;
    }

    /* Print each digit */
    while (divisor > 0)
    {
        unsigned long digit = (num / divisor) % 10;
        print_char('0' + digit);
        divisor /= 10;
    }
}

/* Custom function to print a character */
void print_char(char c)
{
    /* Write the character to the standard output (e.g., using write system call) */
    /* Replace this function with the appropriate system call in your environment */
    /* For example, you can use putchar(c) if allowed */
}
