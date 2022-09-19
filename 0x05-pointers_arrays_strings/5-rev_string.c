#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char firstStr;
	int pointer = 0;
	int counter;

	while (s[pointer] != '\0')
		pointer++;

	for (counter = 0; counter < pointer; counter++)
	{
		pointer--;
		firstStr = s[counter];
		s[counter] = s[pointer];
		s[pointer] = firstStr;
	}
}
