#include <ctype.h>

/**
 * _isalpha - checks if c is alpha
 * @c: character to check
 * Return: 1 if c is alphabet, 0 if not
 */

int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
