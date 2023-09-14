#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a given character is a digit
 * @c: given character
 * Return: 0 if digit, else 0
 */

int _isdigit(int c)
{
	return (isdigit(c) ? 1 : 0);
}
