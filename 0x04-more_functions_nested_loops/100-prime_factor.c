#include <stdio.h>

/**
 * main - prime factors
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				printf("%lu\n", i);
			}
			n = (n / i);
		}
	}
return (0);
}
