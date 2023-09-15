#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
