#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of coins needed for change
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int change[5] = {25, 10, 5, 2, 1};
	int i, result = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < 5 && cents > 0; i++)
	{
		if (cents / change[i] > 0)
		{
			result += cents / change[i];
			cents -= (cents / change[i]) * change[i];
		}
	}
	printf("%d\n", result);
	return (0);
}

