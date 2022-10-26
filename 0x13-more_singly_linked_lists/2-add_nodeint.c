#include "lists.h"
/**
 * *add_nodeint - adds nodes at the beginning of list_t
 * @head: pointer to the head of the list_t list.
 * @n: integer
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newVal;

	newVal = malloc(sizeof(listint_t));

	if (newVal == NULL)
		return (NULL);
	newVal->n = n;
	newVal->next = *head;
	*head = new;

	return (newVal);
}
