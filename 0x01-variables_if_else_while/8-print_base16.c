#include <stdio.h>

/**
 * main - print numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 71; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
