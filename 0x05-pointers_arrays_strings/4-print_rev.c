#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;
	int len;
	int j;

	i = 0;
	while (s[i] != '\0')
		i++;
	len = i;
	j = len;
	for (j; j > 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
