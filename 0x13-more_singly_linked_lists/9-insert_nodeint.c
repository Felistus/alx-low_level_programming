#include "lists.h"
/**
 * *insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head node
 * @idx: index where node is to be added.
 * @n: integer to be added.
 * Return: NULL - if failed
 * Address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *val, *copyOfHead = *head;
	unsigned int count;

	val = malloc(sizeof(listint_t));
	if (val == NULL)
		return (NULL);

	val->n = n;
	if (idx == 0)
	{
		val->next = copyOfHead;
		*head = val;
		return (val);
	}

	for (count = 0; count < idx; count++)
	{
		if (copyOfHead == NULL || copyOfHead->next == NULL)
			return (NULL);
		copyOfHead = copyOfHead->next;
	}
	val->next = copyOfHead->next;
	copyOfHead = val;

	return (val);
}
