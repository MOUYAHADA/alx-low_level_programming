#include <unistd.h>

/**
 * main - write text to the stderr
 *
 * Return: 1
 */

int main(void)
{
	char quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, quote, 59);
	return (1);
}
