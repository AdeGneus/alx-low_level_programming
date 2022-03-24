#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: positive, negative or zero
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c;

	while (s1[a] != '\0')
		a++;

	while (s2[b] != '\0')
		b++;

	if (a < b)
		c = -15;
	else if (a > b)
		c = 15;
	else
		c = 0;

	return (c);
}
