#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Return: 1 if upper and 0 if it isnt
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
