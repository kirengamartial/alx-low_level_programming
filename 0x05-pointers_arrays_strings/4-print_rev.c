#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * print_rev - prints a string in reverse
  * @s: the stnring being reversed
  * Return: void
  */
void print_rev(char *s)
{
	int len;
	char *p;

	len = strlen(s);
	p = s;

	for (p = s + len - 1; p >= s; p--)
	{
		_putchar(*p);
	}
	_putchar('\n');
}
