#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: the number to start form
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 10)
		{
			_putchar('0' + i);
		}
		else
		{
			_putchar(48 + (i / 10));
			_putchar(48 + (i % 10));
		}
		_putchar(44);
		_putchar(32);
	}
	_putchar(10);
}
