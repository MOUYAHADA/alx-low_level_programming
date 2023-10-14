/**
 * is_prime - checks if a number is prime
 * @n: number
 * Return: 1 if @n is prime, if not -> 0
 */

int is_prime(int n)
{
	int i = n - 1;

	while (i > 1)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
