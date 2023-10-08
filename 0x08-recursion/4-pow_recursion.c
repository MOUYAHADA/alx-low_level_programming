#include "main.h"

/**
 * _pow_recursion - returns the power of two numbers
 * @x: number
 * @y: power
 * Return: result of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
