#include "main.h"
/**
 * find_sqrt - finds the natura square_root of a number
 * @x: number to find the square root
 * @y: root to be tested
 * Return: If the number has a natural square root - the square root.
 * If the number does not have a natural square root - -1
 */

int find_sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y == x / 2)
		return (-1);
	return (find_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - prints the natural square root of a number
 * @n: number to print square root
 * Return: returns square root of n
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}

