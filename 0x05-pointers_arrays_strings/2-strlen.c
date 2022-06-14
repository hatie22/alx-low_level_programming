#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer of character
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
