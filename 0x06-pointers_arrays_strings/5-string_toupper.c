#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 * Return: uppercase string
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
