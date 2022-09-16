#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int col, row;

	if (size > 0)
	{
		for (col = 1; col <= size; cpol++)
		{
			for (row = size - col; row > 0; row--)
				_putchar(' ');
			for (row = 0; row < col; row++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
