#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *new_dog - a function that creates a new dog.
 * @name: name of dog
 * @age: age of dpg
 * @owner: owner of dog
 * Return: my dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = malloc(strlen(name) * sizeof(char));
	if ((*dog).name == NULL)
	{
		free((*dog).name);
		return (NULL);
	}
	strcpy((*dog).name, name);
	(*dog).age = age;
	(*dog).owner = malloc(strlen(owner) * sizeof(char));
	if ((*dog).owner == NULL)
	{
		free((*dog).owner);
		return (NULL);
	}
	strcpy((*dog).owner, owner);
return (dog);
}
