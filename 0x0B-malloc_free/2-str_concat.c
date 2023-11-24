#include "main.h"

/**
 * _strlen - count the length of a string
 *
 * @s: string
 *
 * Return: length of string @s
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (!s)
		return (0);

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, x;

	str = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char) + 1);

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	if (!str)
	{
		free(str);
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	x = 0;
	while (s2[x] != '\0')
	{
		str[i] = s2[x];
		i++;
		x++;
	}

	str[i] = '\0';

	return (str);
}
