#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}

