#include <stdio.h>
/**
  * print_array - prints elements of an arrray
  * @a: pointer used to loop throuh the array
  * @n: number of array elements
  * Return: Void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
