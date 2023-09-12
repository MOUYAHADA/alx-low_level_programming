#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

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
		putchar(i[x]);
	}
	putchar(10);
	return (0);
}

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar(i);
	return (0);
}
#endif
