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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	dest = malloc((size1 + size2 + 1) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		dest[i] = s1[i];

	if (n >= size2)
	{
		for (i = 0; s2[i] != '\0'; i++)
			dest[size1 + i] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[size1 + 1] = s2[i];
	}
	dest[size1 + size2] = '\0';
	return (dest);
}
