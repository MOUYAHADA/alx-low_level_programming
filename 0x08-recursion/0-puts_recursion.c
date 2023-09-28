#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar(10);
	}
	_putchar(*s);
	if(*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
