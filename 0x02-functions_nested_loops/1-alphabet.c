#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * main - call the function put_alphabet
 *
 * Return: 0
 */

int main(void)
{

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
		_putchar(10);
		return (0);
	}
	return (0);
}
