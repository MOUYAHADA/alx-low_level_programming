#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to the new string
 */

char *_strdup(char *str)
{
	int i = 0;
char *t;
	if (str == NULL)
	{
		return (NULL);
	}

	t = malloc(sizeof(char) * strlen(str) + 1);

	if (t == NULL)
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	while (*str != '\0')
	{
		*(t + i) = *str;
		str++;
		i++;
	}

	return (t);
}
