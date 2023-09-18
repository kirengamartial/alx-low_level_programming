#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * puts2 - prints every character of a string
  * @str: a pointer to an array str
  * Return: void
  */
void puts2(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
