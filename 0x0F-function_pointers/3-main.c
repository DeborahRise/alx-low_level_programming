#include "3-calc.h"

/**
 * main - main entry
 * @argc: number of parameter passed
 * @argv: parameter passed
 * *Return: 0 or -1
 */

int main(int argc, char **argv)
{
	int num1, num2, answer;
	int  (*store)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	store = (get_op_func)(argv[2]);
	if (store == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	answer = store(num1, num2);
	printf("%d\n", answer);
	return (0);

}
