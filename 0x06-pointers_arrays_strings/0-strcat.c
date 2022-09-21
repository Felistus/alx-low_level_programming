#include "main.h"
/**
 * *_strcat - concats two strings
 * @dest: second and final string
 * @src: first string
 * Return: retuns concat string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
