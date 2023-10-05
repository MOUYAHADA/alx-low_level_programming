#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: arguments count
 * @argv: arguments values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
