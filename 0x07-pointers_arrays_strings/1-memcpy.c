#include "main.h"

/**
 * *_memcpy - copies from one memory area to another
 * @dest: the receiver of copied memory
 * @src: the area from which memory is copied
 * @n: number of bytes to be copied
 * Return: pointer to the receiver
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
