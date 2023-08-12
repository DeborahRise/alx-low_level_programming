#include <stdio.h>

/**
 * main - prints single  digits with ,
 * Return: 0
 */
int main(void)
{
int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
