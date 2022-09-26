#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, firstSum = 0, secondSum = 0;

	for (i = 0; i < size; i++)
	{
		firstSum += a[];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
	       secondSum += a[i];
	       a -= size;
	}
	printf("%d, %d\n", firstSum, secondSum);
}
