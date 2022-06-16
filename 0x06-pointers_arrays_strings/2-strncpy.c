#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: array the returns
 * @src: string to be copied
 * @n: bytes to be copied
 * Return: the parameter dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	for ( ; j < n; j++)
	dest[i + j] = '\0';

	return (dest);
}
