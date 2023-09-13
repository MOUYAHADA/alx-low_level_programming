#include <stdio.h>
#include "main.h"

/**
 * main - print `_putchar`
 *
 * Return: 0
 */
int main(void)
{
	put_chars();
	return (0);
}

/**
 * put_chars - function prints the string `_putchar` to the screen
 * with the help of the function putchar
 * Return: 0
 */
void put_chars(void)
{
	int i[8] = {95, 112, 117, 116, 99, 104, 97, 114}, x = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(i[x]);
	}
	_putchar(10);
}
