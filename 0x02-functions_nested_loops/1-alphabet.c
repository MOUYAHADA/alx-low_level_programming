#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	return (0);
}
