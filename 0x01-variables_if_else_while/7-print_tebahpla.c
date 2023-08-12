#include <stdio.h>

/**
 * main - prints lowercase except q and e
 * Return: 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
