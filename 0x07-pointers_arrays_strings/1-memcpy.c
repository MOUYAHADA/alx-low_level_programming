#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: paste area
 * @src: copy area
 * @n: number of elements to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
