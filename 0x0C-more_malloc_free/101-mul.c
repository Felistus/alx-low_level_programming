#include "main.h"

/**
 * _error_handler - A function to handle error and exit
 * with exit code 98
 *
 */

void _error_handler(void)
{
	printf("Error\n");
	exit(98);
}

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}

return (0);
}

/**
* main - Program entry point
* @argc: Arguments count
* @argv: Arguments values
*
*/

int main(int argc, char *argv[])
{
int num1, num2, i;
char *ar;
if (argc > 3 || argc < 3)
{
_error_handler();
}
ar = argv[2];
while (ar[i] != '\0')
{
printf("ar[%d] = %c", i, ar[i]);
i++;
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

if (num1 && num2 == 0)
_error_handler();

printf("%d\n", (num1 *num2));
return (0);
}
