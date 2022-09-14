#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: integer number input
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = (n % 10);

	if (n < 0)
		m = (-1 * m);

	_putchar(m + '0');
	return (m);
}	
