#include "main.h"

/**
 * more_numbers - print numbers 0-14 x10 times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(49);
			}
			_putchar(48 + ((i >= 10) ? i - 10 : i));
		}
		_putchar(10);
	}
}
