#include <stdio.h>
/**
 * main - prints "_putchar" to the output
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
