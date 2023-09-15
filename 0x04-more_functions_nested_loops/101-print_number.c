#include "main.h"

/**
 * print_number - prints a number using _putchar
 * @n: given number
 * Return: 0
 */

void print_number(int n)
{
	unsigned int i, x, c;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	x = i;
	c = 1;

	while (x > 9)
	{
		x /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((i / c) % 10) + 48);
	}
}
