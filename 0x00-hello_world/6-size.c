#include <stdio.h>

/**
 * main - C program that prints the size of various types on the computer
 * Return: always 0
 */
int main(void)
{
		int lngi;
		long int lng1; 
		long long lng2;
		float lngf;
		char lngc;
	printf("Size of a char is %lu  byte(s).\n", sizeof(lngc)(int));
	printf("Size of a int is %lu byte(s).\n", sizeof(lngi)(int));
	printf("Size of a long int is %lu byte(s).\n", sizeof(lng1)(long int));
	printf("Size of a long long int is %llu byte(s).\n", sizeof(lng2)(long long int));
	printf("Size of a float is %lu byte(s).\n", sizeof(lngf)(long float));
	return (0);

}
