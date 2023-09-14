#include "main.h"

/**
 * print_line - prints a straight line to the screen
 * @n: the length of the line
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
