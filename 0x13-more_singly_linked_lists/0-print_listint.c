#include "lists.h"
/**
 * print_listint - Prints all the elements of a list_t list
 * @h: The listint_t list.
 *
 * Return: The number of nodes in h
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (&h->n == NULL)
			printf("[0] (nil)\n");
		else
			printf("%d %s\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
