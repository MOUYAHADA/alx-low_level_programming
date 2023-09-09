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
		for (x = 48; x < 58; x++)
		{
			for (v = 48; v < 58; v++)
			{
				putchar(i);
				putchar(x);
				putchar(v);
				if (i == 57 && x == 57 && v == 57)
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
