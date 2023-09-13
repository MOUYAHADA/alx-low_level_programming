#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of any given number
 * @n: given number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last = abs(n % 10);

	_putchar('0' + last);

	return (last);
}
