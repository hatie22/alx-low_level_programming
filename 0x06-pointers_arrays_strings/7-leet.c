#include "main.h"
/**
 * leet - encode a string into 1337
 * @str: the string
 * Return: the encoded string
 */

char *leet(char *str)
{
	int i, j;

	char p[] = "AEOTL";
	char k[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	for (j = 0; p[j] != '\0'; j++)
	{
		if (toupper(str[i]) == p[j])
			str[i] = k[j];
	}
	return (str);
}
