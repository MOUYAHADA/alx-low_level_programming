#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 * Return: adress of str
 */

char *rot13(char *str)
{
	char *s = str;
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
		{
			if (*s >= 97)
			{
				*s = lower[*s - 97];
			}
			else
			{
				*s = upper[*s - 65];
			}
			break;
		}
		s++;
	}
	return (str);
}
