#include "main.h"
/**
 * *_strncpy - copies a string to another
 * @dest: pointer to the destination array where the content is to be copied
 * @src: the string to be copied
 * @n: number of characters to be copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[j] != '\0')
		j++;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
