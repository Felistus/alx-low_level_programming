#include <stdio.h>
/**
 * main - prints all combinations of 0 to 99
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int iFirst;
	int jFirst;

	for (iFirst = 48; iFirst < 58; iFirst++)
	{
		for (i = 48; i < 58; i++)
		{
			j = i + 1;
			jFirst = iFirst;
			for (; jFirst < 58; jFirst++)
			{
				for (; j < 58; j++)
				{
					putchar(iFirst);
					putchar(i);
					putchar(' ');
					putchar(jFirst);
					putchar(j);
					if (iFirst != 57 || jFirst != 57 || i != 56 || j != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
