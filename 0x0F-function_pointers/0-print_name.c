#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to nae
 * @f: printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
