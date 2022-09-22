#include "main.h"
/**
 * *leet - Encodes a string to 1337.
 * @str: string to encode
 * Return: pointer to encoded str
 */
char *leet(char *str)
{
	int i, j;

	i = 0;
	char char_toreplace[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == char_toreplace[j] ||
					str[i] - 32 == char_toreplace[j])
				str[i] = j + '0';
		}
		i++
	}
	return (str);
}
