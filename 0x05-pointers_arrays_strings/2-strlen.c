#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character pointer to the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	return (counter);
}
