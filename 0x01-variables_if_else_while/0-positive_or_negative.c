#include <stdlib.h>
#include <time.h>
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
		printf(n, "%n is negative\n");
	} else if(n == 0)
	{
		printf(n, "%n is zero\n");
	} else
	{
		printf(n, "%n is positive\n");
	}
	return (0);
}
