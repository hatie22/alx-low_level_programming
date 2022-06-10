#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int x, y;

	x = 0;

	while (n > 0)
	{
		y = x;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		_putchar('\\');
		_putchar('\n');
		x++;
		n--;
	}
	if (x < 1)
		_putchar('\n');
}
