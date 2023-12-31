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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).name = malloc(strlen(name) * sizeof(char) + 1);
	if ((*dog).name == NULL)
	{
		free((*dog).name);
		free(dog);
		return (NULL);
	}
	strcpy((*dog).name, name);
	(*dog).age = age;
	(*dog).owner = malloc(strlen(owner) * sizeof(char) + 1);
	if ((*dog).owner == NULL)
	{
		free((*dog).name);
		free((*dog).owner);
		free(dog);
		return (NULL);
	}
	strcpy((*dog).owner, owner);
	(*dog).owner[strlen(owner)] = '\0';
return (dog);
}
