#include "main.h"

/**
 * print_square - print a # square of n dimension
 * @size: the size of the square
 */

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar(10);
	}

	if (size <= 0)
	{
		_putchar(10);
	}
}
