#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: preexisting array
 * @old_size: size of preexisting array
 * @new_size: size of new array
 * Return: void, new array or old array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	size_t i, top = new_size;
	char *old_ptr = ptr;

	if (new_size > old_size)
		/*the added memory should not be initialized*/
		top = old_size;
	if (new_size == old_size)
	{
		return (old_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < top; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
		free(ptr);
		return (new_ptr);
}
