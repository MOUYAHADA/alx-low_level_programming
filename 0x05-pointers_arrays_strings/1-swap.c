#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to first int
 * @b: pointer to second int
 */

void swap_int(int *a, int *b)
{
	int l = *a;

	*a = *b;
	*b = l;
}
