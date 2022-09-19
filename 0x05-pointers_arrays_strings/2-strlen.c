#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: received string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
