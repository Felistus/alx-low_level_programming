#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;
	int len;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;

	for (int j = i; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
