#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: final string
 * @src: string to add to dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *dest_2 = dest;

	while (1)
	{
		if (*dest_2 == '\0')
		{
			while (*src != '\0')
			{
				*dest_2 = *src;
				src++;
				dest_2++;
			}
			break;
		}
		dest_2++;
	}
	return (dest);
}
