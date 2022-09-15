#include "main.h"
/**
 * print_line - draws a straight line
 * @n: input received
 */
void print_line(int n)
{
	int i = 1;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	else
		_putchar('\n');
}
