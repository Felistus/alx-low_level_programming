#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		if(count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
