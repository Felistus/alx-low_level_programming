#include "main.h"
/**
 * _strdup - function that returns a pointer to
 * the newly allocated space in memory
 * @str: string to duplicate
 * Return: if str == NULL, or insufficient memory
 * return NULL otherwise, return pointer to new
 * memory allocation
 */

char *_strdup(char *str)
{
	char *array;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		len++;
		i++;
	}

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];
	array[len] = '\0';

	return (array);
}
