#include "main.h"
/**
 * swap_int - swaps the values of the integers
 * @a: pointer to a
 * @b: pionter to b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
