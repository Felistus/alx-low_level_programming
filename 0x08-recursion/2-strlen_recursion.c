#include "main.h"
/**
 * _strlen_recursion - computes the length of a string
 * @s: given string
 * Return: returns teh computed length
 */
int _strlen_recursion(char *s)
{
	int lenOfStr = 0;

	if (*s)
	{
		lenOfStr++;
		lenOfStr += _strlen_recursion(s + 1);
	}
	return (lenOfStr);
}
