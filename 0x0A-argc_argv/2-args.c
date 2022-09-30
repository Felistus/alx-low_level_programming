#include <stdio.h>
/**
 * main - prints all arguments passed to the function
 * @argc: number of rguments
 * @argv: an array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
