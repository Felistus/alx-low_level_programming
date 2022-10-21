#include "lists.h"
#include <string.h>
/**
 * *add_node_end - adds element to the end of the list
 * @head: pointer to the head of the  list
 * @str: string to add
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *strDup;
	int len;

	list_t val, last;

	val = malloc(sizeof(list_t));
	if (val == NULL)
		return (NULL);
	strDup = strdup(str);
	if (strDup == NULL)
	{
		free(val);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	val->str = strDup;
	val->len = len;
	val->next = NULL;

	if (*head == NULL)
		*head = val;
	else
	{
		last = *head;
		while (last != NULL)
		{
			last = last->next;
			last->next = val;
		}
	}
	return (*head);
}
