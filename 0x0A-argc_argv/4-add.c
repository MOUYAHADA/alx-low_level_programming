#include <stdio.h>
#include <stdlib.h>

int isValidNumber(char *s);

/**
 * main - adds all positive numbers given to it
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isValidNumber(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}


/**
 * isValidNumber - checks if a string is a number
 * @s: string to check
 * Return: 1 if s is a number, 0 if not
 */

int isValidNumber(char *s)
{
	while (*s != '\0')
	{
		if (!(*s >= '0' && *s <= '9'))
		{
			return (0);
		}
		s++;
	}
	return (1);
}

