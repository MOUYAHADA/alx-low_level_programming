#include "main.h"

/**
 * _pow - calculates the power of a number
 *
 * @a: base number
 *
 * @b: exponent
 *
 * Return: the result of a^b
 */

int _pow(int a, int b)
{
	int power, i;

	if (b == 0)
		return (1);

	if (b == 1)
		return (a);

	power = 0;
	for (i = 0; i < b; i++)
		power += a * a;

	return (power);
}

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: binary number as string
 *
 * Return: the decimal value of the given binary number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, str_length, i;

	decimal = 0;
	str_length = 0;
	i = 0;

	if (!b)
		return (0);

	while (b[str_length] != '\0')
	{
		if (b[str_length] != '0' && b[str_length] != '1')
			return (0);
		str_length++;
	}

	while (str_length > 0)
	{
		str_length--;
		if (b[str_length] == '1')
			decimal += _pow(2, i);
		i++;
	}


	return (decimal);
}


