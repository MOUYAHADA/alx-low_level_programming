#include <ctype.h>

/**
 * _islower - check if letter is lowercase
 * @c: the letter to be checked
 * Return: 1 lowercase, 0 = not lowercase
 */

int _islower(int c)
{
	return (islower((char)c) ? 1 : 0);
}
