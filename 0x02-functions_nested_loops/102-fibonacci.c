#include "main.h"

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
    int count;

    print_number(prev);
    print_char(',');
    print_char(' ');

    print_number(curr);
    print_char(',');
    print_char(' ');

    for (count = 3; count <= 50; count++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;

        if (count != 50)
        {
            print_number(next);
            print_char(',');
            print_char(' ');
        }
        else
        {
            print_number(next);
        }
    }

    print_char('\n');

    return (0);
}
