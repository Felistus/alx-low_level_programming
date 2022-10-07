#include "main.h"
/**
 * malloc_checked - allocates memroy using malloc.
 * @b: the number of bytes to allocate.
 * Return: a pointer to the allocated memroy.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
