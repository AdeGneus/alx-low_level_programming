#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of memory to be allocated
 * Return: pointer to allocated memory or 98 on failure
*/
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);

	if (alloc == NULL || b < 1)
		exit(98);

	return (alloc);
}
