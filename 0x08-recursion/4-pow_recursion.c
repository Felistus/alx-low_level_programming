#include "main.h"
/**
 * _pow_recursion - prints x raised to the power of y
 * @x: number to be raised to a power
 * @y: power of the number
 * Return: returns the computed power of the x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	y--;
	return (x * _pow_recursion(x, y));
}
