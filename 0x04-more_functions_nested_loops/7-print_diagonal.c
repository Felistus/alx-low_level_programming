#include "main.h"
/**
 * print_diagonal - draw diagonal line on terminal
 * @n: received input
 */
void print_diagonal(int n)
{
	int col;
	int row;

	if (n > 0)
	{
		for (col = 0; col < n; col++)
		{
			for (row = 0; row < n; row++)
			{
				if (col == row)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
