#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 * using putchar prototype _putchar
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
