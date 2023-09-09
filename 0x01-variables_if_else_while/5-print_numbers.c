#include <stdio.h>

/**
 * main - print all single digits of base 10
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");

	return (0);
}
