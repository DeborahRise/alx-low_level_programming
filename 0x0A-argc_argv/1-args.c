#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: number of cmd line arguments
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return  (0);
}
