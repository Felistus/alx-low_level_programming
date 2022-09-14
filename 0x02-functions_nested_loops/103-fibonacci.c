#include <stdio.h>
/**
 * main - prints sum of fibonacci even numbers
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float evenSum = 0;

	while (1)
	{
		sum = fib1 + fib2;
		if (sum > 4000000)
			break;
		
		if ((sum % 2) == 0)
			evenSum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", evenSum);
	return (0);
}
