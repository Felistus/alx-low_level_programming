#include "lists.h"
/**
 * free_listint - frees list_t list
 * @head: pointer to the head node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head->n);
	free(head);
}
