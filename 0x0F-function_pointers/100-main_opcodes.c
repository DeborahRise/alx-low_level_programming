#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes form main function
 * @argc: number of arguments
 * @argv: argument passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned char (*maincode) = (unsigned char *)main;
	int num, i;

	num = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num - 1; i++)
	{
		printf("%02x ", maincode[i]);
	}
	printf("%02x\n", maincode[i]);


	return (0);
}
