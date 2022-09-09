#include <stdio.h>
/**
 * main - print all digits 0 to 9
 * Return: 0
 */
int main(void)
{
	int num = 10;
	int i = 0;

	while (i < num)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
