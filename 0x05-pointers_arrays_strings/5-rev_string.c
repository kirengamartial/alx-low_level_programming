#include <stdio.h>
#include <string.h>
/**
  * rev_string - prints a string in reverse
  * @s: the stnring being reversed
  * Return: void
  */
void rev_string(char *s)
{
	int len;
	int i;

	len = strlen(s);
	i = 0;

	for (i = 0; i <= len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
