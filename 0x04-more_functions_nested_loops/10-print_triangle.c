#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (x = 1; x <= size; x++)
	{
		for (i = size - x; i > 0; i--)
		{
			_putchar(' ');
		}
		for (y = 0; y < x; y++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
