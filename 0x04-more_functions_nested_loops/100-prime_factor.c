#include <stdio.h>

/**
 * main - prime factors
 * Return: 0
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				printf("%lu is the largest prime factor\n", n);
			}
			n = (n / i);
		}
	}
return (0);
}
