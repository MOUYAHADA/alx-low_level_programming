#include <stdio.h>

int main(void)
{
	int IMANINT;
	long int IMLONGINT;
	long long int IMLONGLONGINT;
	char IMACHAR;
	float IMFLOAT;
	printf("Size of a char: %zu byte(s)\nSize of an int: %zu byte(s)\nSize of a long int: %zu byte(s)\nSize of a long long int: %zu byte(s)\nSize of a float: %zu byte(s)\n",sizeof(IMACHAR), sizeof(IMANINT), sizeof(IMLONGINT), sizeof(IMLONGLONGINT), sizeof(IMFLOAT))
	return(0);
}
