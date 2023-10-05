#include <stdio.h>

/**
 * main - prints the number of commandline argumnets
 * @argc: number of arguments
 * @argv: an array of arguments
 * Return: 0
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
