#include "lists.h"
/**
 * *get_nodeint_at_index - returns nth node of a list listint_t
 * @head: pointer to the head node
 * @index: index of the node to return
 * Return: NULL - if index doesn't exist
 * node if index exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
