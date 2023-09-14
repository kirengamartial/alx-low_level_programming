#include <stdio.h>
#include "main.h"
/**
 * main - prints Fizz for multiples of 3, Buzz for those of 5,
 * and FizzBuzz for those of 3 and 5, from 1 to 100
 * Return: Always 0 upon completion
 **/
int main(void)
{
	int counter;

	for (counter = 1; counter <= 100; counter++)
	{
		if (counter % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (counter % 3 == 0)
		{
			printf("Fizz");
		}
		else if (counter % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", counter);
		}
		if (counter < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
