#include "variadic_function.h"
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	var_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);
	return (sum);
}
