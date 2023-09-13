#include "main.h"

/**
 * print_times_table - print the times table of 0 to 9
 * @n: dimension
 * Return: void
 */

void print_times_table(int n)
{
	int i, x, times;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (x = 0; x <= n; x++)
			{
				times = i * x;

				if (x == 0)
					_putchar('0');
				else if (times < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(times % 10 + '0');
				}
				else if (times >= 10 && times < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
				else if (times > 99 && times < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(times / 100 + '0');
					_putchar((times / 10) % 10 + '0');
					_putchar(times % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
