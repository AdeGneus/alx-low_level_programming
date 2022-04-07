#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: the new size in bytes of the new block
 * Return: a pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *prev = ptr;
	unsigned int i, size = new_size;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size * sizeof(*prev));
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		size = old_size;

	for (i = 0; i < size; i++)
	{
		p[i] = prev[i];
	}
	free(ptr);

	return (p);
}
