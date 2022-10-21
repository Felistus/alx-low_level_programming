#include "lists.h"
/**
 * free_list - frees list_t list
 * @head: pointer to the head node
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->next);
	free(head->str);
	free(head);
}
