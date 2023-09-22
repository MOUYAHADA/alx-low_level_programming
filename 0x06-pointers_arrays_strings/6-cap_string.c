#include "main.h"

/**
 * cap_string - captitalizes each word in str
 * @str: pointer to given string
 * Return: address of str
 */

char *cap_string(char *str)
{
	char *s = str;
	char sep[] = {
		' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'
	};
	int i;

	if (*(s) >= 97 && *(s) <= 122)
	{
		*s -= 32;
	}
	while (*s != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*s == sep[i] && *(s + 1) >= 97 && *(s + 1) <= 122)
			{
				*(s + 1) = *(s + 1) - 32;
			}
		}
		s++;
	}

	return (str);
}
