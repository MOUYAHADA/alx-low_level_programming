#include <stdio.h>

/**
 * main - print the sum of even fibonacci sequences
 *
 * Return: 0
 */

int main(void)
{

	int first = 1, second = 2, next;
	long sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
