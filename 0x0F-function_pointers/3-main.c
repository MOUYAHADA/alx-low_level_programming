#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - auto calculation program
 * @argc: number of arguments
 * @argv: arguments values
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && !strcmp(argv[3], "0"))
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
