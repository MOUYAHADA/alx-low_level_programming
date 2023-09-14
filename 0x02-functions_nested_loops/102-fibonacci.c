#include <stdio.h>
#include <stdlib.h>

/**
 * main - print fibonacci serie of 50
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long first = 0, second = 1, sum = first + second;

	for (i = 0; i < 49; i++)
	{
		sum = first + second;
		printf("%ld, ", sum);
		first = second;
		second = sum;
	}
	sum = first + second;
	printf("%ld\n", sum);
	first = second;
	second = sum;
	return (0);
}
