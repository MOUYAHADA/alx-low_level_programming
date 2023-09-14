#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a letter is uppercase
 * @c: decimal number of character
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if(c >= 65 && c <= 91 )
	{
		return (1);
	}

	return (0);
}
