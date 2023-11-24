#include "main.h"

/**
 * flip_bits - count the number of bits we need to flip
 * to get from one number to an other
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of bits to flip;
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference > 0)
	{
		count += difference & 1;
		difference >>= 1;
	}
	return (count);
}
