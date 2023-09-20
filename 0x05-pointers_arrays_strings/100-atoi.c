#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an int
 * @s: pointer to the string
 * Return: the int value
 */

int _atoi(char *s)
{
	int i = 0, isPositive = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			isPositive *= -1;
		}

		if (*s >= '0' && *s <= '9')
		{
			if (i + *s >= INT_MAX / 10)
			{
				return (isPositive == 1 ? INT_MAX : INT_MIN);
			}
			i *= 10;
			i += *s - 48;
			if (*(s + 1) < 48 || *(s + 1) > 57)
			{
				break;
			}
		}
		s++;
	}
	return (i * isPositive);
}
