#include <stdio.h>
/**
 * main - prints single digits 0 to 9
 * Description: using putchar to print numbers without a char data type
 * Return (0);
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
