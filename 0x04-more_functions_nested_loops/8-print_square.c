#include "main.h"
/**
 * print_square - prints squares
 * @size: size of square
 */
void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (col = 0; col < size; col++)
		{
			for (row = 0; row < size; row++)
				_putchar('#');

			if (col == (size - 1))
				continue;
			_putchar('\n')
		}
	}
	_putchar('\n');
}
