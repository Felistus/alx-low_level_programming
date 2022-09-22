#include "main.h"
/**
 * *leet - replace character with number
 * @str: string input
 * Return: str
 */
char *leet(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	char char_toreplace[] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j; j <= 7; j++)
		{
			if (str[i] == char_toreplace[j] ||
					str[i] - 32 == char_toreplace[j])
				str[i] = j + '0';
		}
		i++
	}
	return (str);
}
