#include "main.h"
/**
 * main - prints alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
	return (0);
}
