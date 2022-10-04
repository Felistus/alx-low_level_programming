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

	while (str[i])
	{
		len++;
		i++;
	}

	array = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);
	return (array);
}
