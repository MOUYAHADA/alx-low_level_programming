#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check last digit of int
 *
 * Return: 0
 */

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("Last digit of %d is %d and", n, x);

	if (x > 5)
	{
		printf(" is greater than 5\n");
	}
	else if (x < 6 && x != 0)
	{
		printf(" is less than 6 and not 0\n");
	}
	else if (x == 0)
	{
		printf(" is zero\n");
	}

	return (0);
}
