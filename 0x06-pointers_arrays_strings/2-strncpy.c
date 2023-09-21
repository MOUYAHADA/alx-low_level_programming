#include "main.h"

/**
 * _strncpy - copies string
 * @dest: final string
 * @src: string to copy
 * @n: maximum
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_2 = dest;

	while (*src != '\0' && n > 0)
	{
		*dest_2 = *src;
		src++;
		dest_2++;
		n--;
	}
	while (n > 0)
	{
		*dest_2 = '\0';
		dest_2++;
		n--;
	}
	return (dest);
}
