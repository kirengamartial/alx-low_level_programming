#include <unistd.h>

/**
 * custom_putchar - Custom implementation of putchar function
 * @c: The character to be printed
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int custom_putchar(char c)
{
    return write(1, &c, 1);
}
