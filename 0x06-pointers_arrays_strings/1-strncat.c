#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: final string
 * @src: string to concat
 * @n: size of src to use
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (j == n)
			break;
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
