#include <stdio.h>

/**
 * main - prime factors
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= 612852475143; i++)
	{
		while (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld is the largest prime factor\n", i);
			}
			n = (n / i);
		}
	}
return (0);
}
