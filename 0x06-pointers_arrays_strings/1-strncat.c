#include "main.h"
/**
 * _strncat - concantenates two stings
 * @dest: input parameter string
 * @src: input parameter string
 * @n: bytes to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';

	return (dest);
}
