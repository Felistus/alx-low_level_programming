#include "main.h"
/**
 * argstostr - concatenates all arguments of a program into a string
 * arguments are separated by a new line in string
 * @ac: the number of arguments passed to the program
 * @av: array of pointers to the arguments
 * Return: if ac == 0, av == NULL, or function fails - NULL
 * else - a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == 0)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);
	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];
		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
