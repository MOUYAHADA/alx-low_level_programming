#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: pointer to string
 * @needle: pointer to char to search
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *find = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (find);
		}
		needle = fneedle;
		find++;
		haystack = find;
	}
	return (0);
}
