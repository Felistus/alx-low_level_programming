#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: given number
 * Return: returns the factorial
 */

int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
