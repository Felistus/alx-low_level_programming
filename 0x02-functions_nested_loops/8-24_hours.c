#include "main.h"
/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * /10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (; hour <= 23; hour++)
	{
		for (; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
