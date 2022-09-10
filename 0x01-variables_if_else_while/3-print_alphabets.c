#include <stdio.h>
/**
 * main - prints lower and upper case alphabetts
 * Return: 0
 */
int main(void)
{
	char lowCase;
	char upCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
	{
		putchar(lowCase);
	}
	
	for (upCase = 'A'; upCase <= 'Z'; upCase++)
	{
		putchar(upCase);
	}
	putchar('\n');
	return (0);
}
