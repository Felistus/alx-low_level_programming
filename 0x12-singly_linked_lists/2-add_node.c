#include "lists.h"
#include <string.h>
/**
 * *add_node - adds nodes at the beginning of list_t
 * @head: pointer to the head of the list_t list.
 * @str: string to be added
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *strDup;
	int len;

	list_t *newVal;

	newVal = malloc(sizeof(list_t));

	if (newVal == NULL)
		return (NULL);
	strDup = strdup(str);
	if (strDup == NULL)
	{
		free(newVal);
		return (NULL);
	}

	for (len = 0; str[len])
		len++;
	newVal->str = strDup;
	newVal->len = len;
	newVal->next = *head;
	*head = newVal;

	return (newVal);
}
