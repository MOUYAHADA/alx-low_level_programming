#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to the array
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int *start, *end, temp, i, x;

	x = n % 2 == 0 ? n / 2 : (n / 2) + 1;
	for (i = 0; i < x; i++)
	{
		start = (a + i);
		end = (a + (n - 1 - i));
		temp = *(a + i);
		*start = *end;
		*end = temp;
	}
}
