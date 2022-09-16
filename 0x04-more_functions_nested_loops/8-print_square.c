#include "main.h"
/**
 * print_square - prints squares
 * @size: size of square
 */
void print_square(int size)
{
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				_putchar('#');

			if (i == (size - 1))
				continue;
			_putchar('\n')
		}
	}
	_putchar('\n');
}
