#include "lists.h"
/**
 * list_len - prints number of elements in list_t
 * @h: string
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t values = 0;

	while (h)
	{
		values++;
		h = h->next;
	}
	return (values);
}

