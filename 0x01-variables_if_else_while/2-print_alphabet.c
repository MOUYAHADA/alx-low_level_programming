#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
