#include <stdlib.h>
void __attribute__((constructor)) hare(void);
/**
 * hare_tortoise - prints a string before the
 * main function is executed
 */
void hare_tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
