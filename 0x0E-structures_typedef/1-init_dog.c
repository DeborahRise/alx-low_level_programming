#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		free(d);
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
