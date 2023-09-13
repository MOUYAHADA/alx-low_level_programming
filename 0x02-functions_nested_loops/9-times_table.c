#include "main.h"

/**
 * times_table - print the times table of 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, x, times;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			times = i * x;
			if (times >= 10)
			{
				if (x != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				_putchar(48 + (times / 10));
				_putchar(48 + (times % 10));
			}
			else
			{
				if (x != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(48 + times);
			}
		}
		_putchar(10);
	}
}
