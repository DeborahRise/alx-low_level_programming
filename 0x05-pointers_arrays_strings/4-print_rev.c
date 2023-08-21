#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @s: string passed
 * Return: 0
 */

void print_rev(char *s)
{
	int i = strlen(s);
	int j;

	for (j = i - 1; j >= 0; j--)
	{
	printf("%c", s[j]);
	}
	printf("\n");
}
