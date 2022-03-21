#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char rev[1000];

	while (s[i] != '\0')
		i++;

	for (; i > 0; i--)
	{
		rev[j] = s[i - 1];
		j++;
	}

	while (i < j)
	{
		s[i] = rev[i];
		i++;
	}
}
