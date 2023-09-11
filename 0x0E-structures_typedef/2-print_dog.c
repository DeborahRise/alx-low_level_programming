#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: pointer to struct dog
 * Return: the dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: nill\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("Age: \n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("owner: nill\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
