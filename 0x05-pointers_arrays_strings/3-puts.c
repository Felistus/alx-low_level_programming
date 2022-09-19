#include "main.h"
/**
 * _puts - prints a string
 * @str: received string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
