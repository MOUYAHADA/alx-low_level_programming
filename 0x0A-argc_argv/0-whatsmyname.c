#include <stdio.h>

/**
 * main - print's the name of the program
 * @argc: size of argv
 * @argv: array of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

