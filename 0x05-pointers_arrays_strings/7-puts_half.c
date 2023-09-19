#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to string
 */

void puts_half(char *str)
{
	int i, x;
	char *s = str;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s = str;
	x = i % 2 == 0 ? i / 2 : (i + 1) / 2;

	while (x < i)
	{
		_putchar(*(s + x));
		x++;
	}
	_putchar(10);
}
