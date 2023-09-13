#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - print "_puthcar" to the screen
 * @c: character to print
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * put_alphabet - print alphabet
 *
 * Return: 0
 */

int put_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar(i);
	return (0);
}

/**
 * put_chars - function prints the string `_putchar` to the screen
 * with the help of the function putchar
 * Return: 0
 */
int put_chars(void)
{
	int i[8] = {95, 112, 117, 116, 99, 104, 97, 114}, x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(i[x]);
	}
	_putchar(10);
	return (0);
}
#endif
