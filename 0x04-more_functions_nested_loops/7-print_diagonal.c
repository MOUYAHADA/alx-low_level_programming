#include "main.h"

/**
 * print_diagonal - prints a diagonal of  length n
 * @n: lenght of the diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
	{
		_putchar(10);
	}

	for (i = 1; i <= n; i++)
	{
		for (x = 1; x < i; x++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}
