#include "main.h"
/**
 * string_toupper - changes all lower case letters of a string to uppercase
 * @str: the string to change
 * Return: the uppercase string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}

	return (str);
}
