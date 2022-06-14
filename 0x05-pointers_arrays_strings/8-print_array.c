#include "main.h"
#include <stdio.h>

/**
 * print_array - print the n elements of an array
 * @a: array to print
 * @n: number of elements in the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
