#include <stdio.h>

/**
 * main - print the size of each variable to the screen
 *
 * Return: 0
 */

int main(void)
{
	int IMANINT;
	long int IMLONGINT;
	long long int IMLONGLONGINT;
	char IMACHAR;
	float IMFLOAT;

	printf("Size of a char: %zu byte(s)\n"
			"Size of an int: %zu byte(s)\n"
			"Size of a long int: %zu byte(s)\n"
			"Size of a long long int: %zu byte(s)\n"
			"Size of a float: %zu byte(s)\n",
			sizeof(IMACHAR),
			sizeof(IMANINT),
			sizeof(IMLONGINT),
			sizeof(IMLONGLONGINT),
			sizeof(IMFLOAT));
	return (0);
}
