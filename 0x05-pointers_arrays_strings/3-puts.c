#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  * _puts - prints a string to stdout
  * @str: the string being printed
  */
void _puts(char *str)
{
	int len;
	int i;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
	}
	_putchar('\n');
}
