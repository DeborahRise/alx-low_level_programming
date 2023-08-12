#include <stdio.h>

/**
 * main - prints lowercase and uppercase
 * Return: 0
 */
int main(void)
{
char a[] = "abcdefghijklmnopqrstuvwxyz";
char A[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int c = 0;
int d = c;

for (c = 0; c < 26; c++)
{
	d = c;
	while (d = c)
		putchar(a[d]);
	d++;
}
putchar(A[c]);
putchar('\n');
return (0);
}
