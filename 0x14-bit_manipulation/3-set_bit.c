#include "main.h"

/**
 * set_bit - sets a bit to 0 at a given index
 *
 * @n: number
 *
 * @index: index
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (mask << index);

	return (1);
}
