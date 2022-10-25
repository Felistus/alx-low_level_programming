#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list listint_t
 * @h: pointer to listint_t  head
 * Return: return s number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t values = 0;

	while (h)
	{
		values++;
		h = h->next;
	}
	return (values);
}
