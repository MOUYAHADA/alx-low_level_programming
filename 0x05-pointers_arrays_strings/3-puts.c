#include "main.h"

/**
 * _puts - prints a string to the screen
 * @str: pointer to string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
