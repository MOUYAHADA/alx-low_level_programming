#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to allocate
 * Return: pointer to allocated memory or 98
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(sizeof(b));

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
