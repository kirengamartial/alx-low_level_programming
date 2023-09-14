#include "main.h"

/**
 * print_triangle - prints a triangle of #
 * @size: size of the triangle
 *
 * Description: If size is 0 or less, it prints a newline.
 * Each row contains 'size' number of # characters.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
