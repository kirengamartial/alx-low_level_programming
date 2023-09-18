#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: the strng being truncated
  */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == '\0')
			break;
		if (i > ((len - 1) / 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
