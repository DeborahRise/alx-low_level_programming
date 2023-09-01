#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of cmd line arguments
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, x;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			}
		x = atoi(argv[i]);
		sum = sum + x;
		}
	printf("%d\n", sum);
	}

	return  (0);
}
