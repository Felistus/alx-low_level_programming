#include <stdio.h>
/**
 * main - prints all hexal decimals
 * Return: 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 97; j <= 102; j++)
		putchar(j);
	putchar('\n');
	return (0);

}
