#include <stdio.h>

/**
 * main - print all comination of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i, x, v, y;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (v = i; v <= 9; v++)
			{
				for (y = (i == v) ? x + 1 : 48; y <= 9; y++)
				{
					putchar(i + 48);
					putchar(x + 48);
					putchar(32);
					putchar(v + 48);
					putchar(y + 48);
					if (i == 9 && x == 8 && v == 9 && y == 9)
					{
						break;
					}
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}
