#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to modify
 * Return: pointer to modified string
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
