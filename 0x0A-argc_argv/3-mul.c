#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: If the program receives two arguments - 0.
 * If the program receives less than 2 arguments - 1
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);
	return (0);
}
