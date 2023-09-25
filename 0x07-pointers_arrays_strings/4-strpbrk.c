#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for any set of bytes
 * @s: pointer to string
 * @accept: pointer to byte constant
 * Return: Null or s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
