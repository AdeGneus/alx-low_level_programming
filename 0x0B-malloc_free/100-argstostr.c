#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Return: length of string as int
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 * argstostr - concatenates all arguments passed
 * @ac: arguments count
 * @av: arguments, pointer to strings
 * Return: pointer to string, NULL if fails
*/
char *argstostr(int ac, char **av)
{
	char *s;
	unsigned int size, i, j, k;

	size = 0;
	k = 0;

	if (ac < 1 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		size += _strlen(av[i]);
	}

	s = malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
