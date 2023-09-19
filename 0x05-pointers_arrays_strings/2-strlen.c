#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: string lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
