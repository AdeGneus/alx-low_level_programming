#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: string to be duplicated
 * Return: pointer to the duplicated str or NULL if insufficient memory
*/
char *_strdup(char *str)
{
	char *s;
	unsigned int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);
	s = malloc(i * sizeof(char));

	if (s == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
