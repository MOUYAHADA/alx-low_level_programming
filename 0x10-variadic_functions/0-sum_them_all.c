#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all number given to it
 * @n: first argument
 * @...: variadic arguments
 * Return: sum of all numbers or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	return (sum);
}
