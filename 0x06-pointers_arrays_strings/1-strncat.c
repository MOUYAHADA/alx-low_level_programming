#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: final string
 * @src: string to add to dest
 * @n: maximum
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_2 = dest;

	while (1)
	{
		if (*dest_2 == '\0')
		{
			while (*src != '\0' && n > 0)
			{
				*dest_2 = *src;
				src++;
				dest_2++;
				n--;
			}
			break;
		}
		dest_2++;
	}
	return (dest);
}
