#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks if a letter is uppercase
 * @c: decimal number of character
 * Return: 1 or 0
 */

int _isupper(int c)
{
	return (isupper(c) ? 1 : 0);
}
