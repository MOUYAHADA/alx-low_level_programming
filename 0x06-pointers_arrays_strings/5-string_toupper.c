#include "main.h"

/**
 * string_toupper - changes string to uppercase
 * @s: string to change
 * Return: address of @s
 */

char *string_toupper(char *s)
{
	char *str = s;

	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (s);
}
