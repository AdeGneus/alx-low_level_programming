#include "main.h"

/**
 * *_strncpy - copies string from src to dest
 * @dest: buffer to receive the copied strings
 * @src: string from which n bytes of char is copied
 * @n: number of bytes of string to be copied
 * Return: pointer to the resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;

	for (c = 0; c < n; c++)
		dest[c] = src[c];

	if (b < n)
	{
		for (; b < n; b++)
			dest[a + 1] = '\0';
	}
	return (dest);
}
