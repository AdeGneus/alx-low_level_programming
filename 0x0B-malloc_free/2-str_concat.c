#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	char *newStr;

	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	newStr = malloc((i + j + 1) * sizeof(char));

	if (newStr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		newStr[a] = s1[a];

	for (b = 0; s2[b] != '\0'; b++)
		newStr[a + b] = s2[b];

	newStr[a + b] = s2[b];
	return (newStr);
}
