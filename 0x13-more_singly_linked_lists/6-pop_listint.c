#include "lists.h"
/**
 * pop_listint - deletes the head node of a list listint_t
 * @head: pointer to head node
 * Return: 0 - if list if empty
 * head node data when deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *val;
	int delVal;

	if (*head == NULL)
		return (0);

	val = *head;
	delVal = (*head)->n;
	*head = (head)->next;
	free(val);

	return (delVal);
}
