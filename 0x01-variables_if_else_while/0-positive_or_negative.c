#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a code to determine a numbers positivity or negetivity
 * Return: always 0
 */

int main(void)
{
	long int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n: %d\n", n);
	if (n > 0)
		printf("%ld is positive\n", n);
	else if (n < 0)
		printf("%ld is negetive\n", n);
	else
		printf("%ld is zero\n", n);
return (0);
}

