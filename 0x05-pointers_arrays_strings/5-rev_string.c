#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	char *p = s;
	int i = 0;
	int start, end;

	while (*p != '\0')
	{
		i++;
		p++;
	}

	p = s;
	start = 0;
	end = i - 1;
	while (start < end)
	{
		char temp = *(p + start);
		*(p + start) = *(p + end);
		*(p + end) = temp;
		start++;
		end--;
	}
}
