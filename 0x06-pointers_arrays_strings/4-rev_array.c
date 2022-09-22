#include "main.h"
/**
 * reverse_array - reverses the elements in an array
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, current_val;

	for (i = 0; i < n; i++)
	{
		n--;
		current_val = a[i];
		a[i] = a[n];
		a[n] = current_val;
	}
}
