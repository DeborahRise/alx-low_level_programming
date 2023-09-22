#include "lists.h"

void lol(void)__attribute__ ((constructor));
/**
 * lol - a function that prints before the main function is executed.
 */

void lol(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
