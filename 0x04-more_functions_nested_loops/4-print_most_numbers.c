#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '99'; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num);
		num++;
	}
	_putchar('\n');
}
