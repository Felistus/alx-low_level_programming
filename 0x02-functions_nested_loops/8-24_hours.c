#include "main.h"
/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (; hour <= 23; hour++)
	{
		for (; minute <= 59; minute++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
