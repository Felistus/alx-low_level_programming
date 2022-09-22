#include "main.h"
/**
 * *infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the addition result
 * @size_r: size of the buffer
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len_n1 = 0, len_n2 = 0;

	for (i = 0; *(n1 + index); i++)
		len_n1++;

	for (i = 0; *(n2 + i); i++)
		len_n2++;

	if((size_r <= len_n1 + 1) || (size_r <= len_n2 + 1))
		return (0);

	n1 += len_n1 - 1;
	n2 += len_n2 - 1;
	*(r + size_r) = '\0';

	return (r);
}
