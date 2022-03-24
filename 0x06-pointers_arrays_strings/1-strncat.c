#include "main.h"

/**
 * *_strncat - appends n bytes of a string to another string
 * @dest: string to be overwritten
 * @src: string from which n byte of char will be appended from
 * @n: number of bytes to be appended to dest
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
