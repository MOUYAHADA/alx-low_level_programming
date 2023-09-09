#include <stdio.h>

/**
 * main - print all comination of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, x;

	for (i = 48; i < 58; i++)
	{
		for (x = i + 1; x < 58; x++)
		{
			putchar(i);
			putchar(x);
			if (i + 1 > 56)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
