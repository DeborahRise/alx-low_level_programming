#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of cmd line arguments
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
	}
	if (money >= 25)
	{
		coins = coins + (money / 25);
		money = money % 25;
	}
	if (money >= 10)
	{
		coins = coins + (money / 10);
		money = money % 10;
	}
	if (money >= 5)
	{
		coins = coins + (money / 5);
		money = money % 5;
	}
	if (money >= 2)
	{
		coins = coins + (money / 2);
		money = money % 2;
	}
	if (money == 1)
	{
		coins = coins + 1;
	}
	printf("%d\n", coins);
return  (0);
}
