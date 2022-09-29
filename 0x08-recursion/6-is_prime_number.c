#include "main.h"
/**
 * prime_helper - checks if prime
 * @n: number to check
 * @i: the divisor
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */
int prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to test if it's prime
 * Return: if prime, return 1
 * if not prime, return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	return (prime_helper(n, i));
}
