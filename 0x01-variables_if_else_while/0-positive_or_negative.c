#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a code to determine a numbers positivity or negetivity
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n: %d\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negetive\n", n);
return (0);
}

