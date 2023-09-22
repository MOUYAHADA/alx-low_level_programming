#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: pointer to the string
 * Return: address to str
 */

char *leet(char *str)
{
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char nums[5] = {'4', '3', '0', '7', '1'};
	char *s = str;
	int i;

	while (*s != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == letters[i] || *s == letters[i] - 32)
			{
				*s = nums[i];
			}
		}
		s++;
	}
	return (str);
}
