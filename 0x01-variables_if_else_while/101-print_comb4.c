#include <stdio.h>

/**
 * main - 3 digit combinations
 *
 * Return: Always 0.
 */
int main(void)
	{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; i++)
	{
	for (j = i + 1; j <= 56; j++)
	{
		for (k = j + 1; k <= 57; k++)
		{
		putchar(i);
		putchar(j);
		putchar(k);
		if (i == 55 && j == 56 && k == 57)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
	}

