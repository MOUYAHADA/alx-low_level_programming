#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n:  the number to check
 * Return: 1 if n is s positive, 0 if n is zero, -1 if in is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
