#include "main.h"

/**
 * puts2 - prints every othere character in a string
 * @str: pointer to string
 */

void puts2(char *str)
{
	int i, x;
	char *s = str;

	i = 0;
	x = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s = str;

	while (x < i)
	{
		_putchar(*(s + x));
		x += 2;
	}
	_putchar(10);
}
