#include "main.h"
/**
 * more_numbers - prints 0 to 14 10times
 */
void more_numbers(void)
{
	int count = 1;
	int num;

	while (count <= 10)
	{
		for (num = 0; num <= 14; num++)
			_putchar(num);
		_putchar('\n');
		count++;
	}
}
