#include <stdio.h>

/**
 * main - print fibonacci serie of 50
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int i, a, b, ap1, ap2, bp1, bp2;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b = b + a;
		a = b - a;
	}

	ap1 = a / 1000000000;
	ap2 = a % 1000000000;
	bp1 = b / 1000000000;
	bp2 = b % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", ap1 + (bp2 / 1000000000));
		printf("%lu", bp2 % 1000000000);
		ap1 = ap1 + bp1;
		bp1 = ap1 - bp1;
		bp2 = bp2 + ap2;
		ap2 = bp2 - ap2;
	}

	printf("\n");
	return (0);
}

