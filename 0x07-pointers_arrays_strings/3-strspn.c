#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to be searched
 * @accept: prefix to be measured
 *
 * Return: the number of bytes in s
 * which consist of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int foundLen = 0, sLen = 0, acceptLen = 0,
	    i = 0, j = 0;

	while (s[i] != '\0')
	{
		sLen++;
		i++;
	}
	while (accept[j] != '\0')
	{
		acceptLen++;
		j++;
	}

	for (i = 0; i < sLen; i++)
	{
		for (j = 0; j < acceptLen; j++)
		{
			if (s[i] == accept[j])
				foundLen++;
		}
		if (foundLen == acceptLen)
		{
			foundLen++;
			break;
		}
	}
	return (foundLen);
}
