#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: If concatenation fails - NULL.
 *  Otherwise - a pointer the newly-allocated space in memory
 *  containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_string;
	int i, len = 0, join_index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat_string = malloc(sizeof(char) * len);

	if (concat_string == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_string[join_index++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_string[join_index++] = s2[i];

	return (concat_string);
}
