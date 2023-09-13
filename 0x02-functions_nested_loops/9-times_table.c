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
			if (times > 10)
			{
				_putchar(48 + (times / 10));
				_putchar(48 + (times % 10));
				if (i != 9)
				{
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				_putchar(48 + times);
				if (i != 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
				}
			}
		}
		_putchar(10);
	}
}
