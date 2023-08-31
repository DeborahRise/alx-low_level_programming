#include "main.h"

/**
 * help_is_prime_number - function that returns  a prime number
 * @n: number given
 * @i: prime number checker
 * Return: 1 if Prime num or 0 if not
 */

int help_is_prime_number(int n, int i)
{
	if (i > 1)
	{
	if (n % i == 0)
		return (0);
	else
		return (help_is_prime_number(n, i - 1));
	}
	return (1);
}
/**
 * is_prime_number - function that returns  a prime number
 * @n: number given
 * Return: 1 if Prime num or 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0 || n <= 1)
	return (0);
	else
	return (help_is_prime_number(n, n / 2));
}

