#include "main.h"
#include <stdio.h>

/**
 * _naturals - get the sum of all the natural numbers below n
 * @n: given number
 * Return: 0;
 */

void _naturals(int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
