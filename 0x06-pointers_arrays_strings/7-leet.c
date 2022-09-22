#include "main.h"
/**
 * *leet - Encodes a string to 1337.
 * @str: string to encode
 * Return: pointer to encoded str
 */
char *leet(char *str)
{
	int i = 0, j;
	char toreplace[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == toreplace[j] ||
					str[i] - 32 == toreplace[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
