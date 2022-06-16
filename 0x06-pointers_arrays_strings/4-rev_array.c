#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: an array of integers
 * @n: number of elements of an integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
