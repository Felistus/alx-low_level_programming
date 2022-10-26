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
	listint_t nodeToReturn;
	unsigned int count = 0;
	int len;

	len = size_t listint_len(const listint_t *head);

	if (index < 0 || index > (len - 1))
		return (NULL);

	while (*head)
	{
		if (count == index)
		{
			nodeToReturn = *head;
			break;
		}
		*head = (*head)->next;
	}
	return (nodeToReturn);
}
