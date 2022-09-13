#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: single input character
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
