#include "lists.h"
/**
 * *add_nodeint_end - adds element to the end of the list
 * @head: pointer to the head of the  list
 * @n: integer to add
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *val, *last;

	val = malloc(sizeof(listint_t));
	if (val == NULL)
		return (NULL);

	val->n = n;
	val->next = NULL;

	if (*head == NULL)
		*head = val;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = val;
	}
	return (*head);
}
