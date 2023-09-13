#include "main.h"

/**
 * jack_bauer - print every minute in the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, x, z, y;

	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 10 && (i * 10 + x) < 24; x++)
		{
			for (y = 0; y < 6; y++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar(i + 48);
					_putchar(x + 48);
					_putchar(58);
					_putchar(y + 48);
					_putchar(z + 48);
					_putchar(10);

				}
			}
		}


	}
}
