#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @ab: integer parameter
 * Return: absolute value of given number
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
