#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of cmd line arguments
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, x;
	int prod = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
		x = atoi(argv[i]);
		prod = prod * x;
		}
	printf("%d\n", prod);
	}

	return  (0);
}
