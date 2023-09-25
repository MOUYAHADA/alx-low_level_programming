#include "main.h"

/**
 * _strspn - get's length of prefix substring
 * @s: pointer to string
 * @accept: substring of accepted chars
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *acc = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = acc;
	}
	return (c);
}
