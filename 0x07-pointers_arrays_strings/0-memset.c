#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory address
 * @b: bytes of memory to be filled
 * @n: numner of bytes to be filled
 * Return: Pointer to the memory address
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
