#include <stdio.h>

/**
 * main - C program that prints the size of various types on the computer
 * Return: always 0
 */
int main(void)
{
	int num;
	long int long_num; 
	long long long_num2;
	float float_num;
	char string;
	printf("Size of a char is %i  byte(s).\n", sizeof(int));
	printf("Size of a int is %i byte(s).\n", sizeof(int));
	printf("Size of a long int is %lu byte(s).\n", sizeof(long int));
	printf("Size of a long long int is %llu byte(s).\n", sizeof(long long int));
	printf("Size of a float is %f byte(s).\n", sizeof(float));
	return (0);

}
