#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - print "_puthcar" to the screen
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
