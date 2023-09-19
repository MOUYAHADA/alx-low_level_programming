#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		s--;
		i--;
		_putchar(*s);
	}
	_putchar(10);
}
