#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of cmd line arguments
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return  (0);
}
