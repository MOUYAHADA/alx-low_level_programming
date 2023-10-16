/**
 * is_prime - checks if a number is prime
 * @n: number
 * @i: number
 * Return: 1 if @n is prime, if not -> 0
 */

int is_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (i <= 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, n / 2));
}
