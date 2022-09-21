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
	int i, j, p;

	i = 0;
	j = 0;
	p = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;

	while (p != n)
	{
		if (j < n || p == n)
			break;
		dest[i] = src[p];
		i++;
		p++;
	}
	dest[i] = '\0';
	return (dest);
}
