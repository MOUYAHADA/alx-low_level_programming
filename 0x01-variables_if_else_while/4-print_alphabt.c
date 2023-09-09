#include <stdio.h>

/**
 * main - print alphabets in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}

		putchar(i);
	}

	putchar(10);
	return (0);
}
