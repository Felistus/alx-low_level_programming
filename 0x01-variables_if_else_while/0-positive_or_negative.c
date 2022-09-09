#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Checks if a number is positive or negative and prints
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n < 0)
	{
		printf(n, "%d is negative\n");
	} else if(n == 0)
	{
		printf(n, "%d is zero\n");
	} else
	{
		printf(n, "%d is positive\n");
	}
	return (0);
}
