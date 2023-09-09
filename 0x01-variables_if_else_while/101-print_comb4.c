#include <stdio.h>

/**
 * main - print all comination of three digits
 *
 * Return: 0
 */

int main(void)
{
	int i, x, v;

	for (i = 48; i < 58; i++)
	{
		for (x = i + 1; x < 58; x++)
		{
			for (v = x + 1; v < 58; v++)
			{
				putchar(i);
				putchar(x);
				putchar(v);
				if (i == 55 && x == 56 && v == 57)
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
