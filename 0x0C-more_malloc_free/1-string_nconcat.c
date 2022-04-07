#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string to copy to
 * @s2: string to copy n bytes from
 * @n: number of bytes to copy
 * Return: pointer to new string or NULL if failed
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int i, size1, size2;

	size1 = 0;
	size2 = 0;

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (size2 > n)
		size2 = n;

	dest = malloc((size1 + size2 + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		dest[i] = s1[i];

	for (i = 0; i < size2; i++)
		dest[size1 + i] = s2[i];

	dest[size1 + size2] = '\0';
	return (dest);
}
