#include "main.h"

/**
 * print_chessboard - prints chessdashborad
 * @a: board schema
 */

void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(*(*(i + a) + x));
		}
		_putchar('\n');
	}
}
