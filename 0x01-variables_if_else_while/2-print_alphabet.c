#include <stdio.h>

/**
 * main - a program that that prints the alphabet in lowercase, followed by a new line.
 * Return: 0
 */

int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
