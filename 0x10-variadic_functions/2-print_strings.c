#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings and uses a separator
 * @separator: string
 * @n: number of arguments
 * @...: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		printf("%s", str ? str : "(nil)");
		printf("%s", (separator && i != n - 1) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
