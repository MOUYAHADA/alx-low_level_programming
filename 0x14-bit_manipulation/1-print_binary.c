#include "main.h"

/**
 * print_binary - prints the binary value of a number
 *
 * @n: the given number
 *
 */

void print_binary(unsigned long int n)
{
	int bit_count = sizeof(n) * 8;

	int _zero = 1, i;

	for (i = bit_count - 1; i >= 0; i--)
	{
		unsigned long int mask = (unsigned long int)1 << i;

		if (n & mask)
		{
			_putchar('1');
			_zero = 0;
		}
		else if (!_zero)
		{
			_putchar('0');
		}
	}

	if (_zero)
	{
		_putchar('0');
	}
}
