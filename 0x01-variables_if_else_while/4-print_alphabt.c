#include <stdio.h>
/**
 * main - prints all alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char c, p;

	for (c = 'A'; c <= 'Z'; c++)
	{
		p = tolower(c);
		if (p != 'q' && p != 'e')
			putchar(p);
	}
	putchar('\n');
	return (0);
}
