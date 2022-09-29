#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: number to test if it's prime
 * Return: if prime, return 1
 * if not prime, return 0
 */

int is_prime_number(int n)
{
	bool isPrime = true;
	int i = 2;

	if (n > 1)
	{
		while (i < n)
		{
			if (n % i == 0)
			{
				isPrime = false;
				return (0);
			}
			i++;
		}
		if (isPrime)
			return (1);
	}
	return (0);
}
