#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to str
 */
char *leet(char *str)
{
	int a, b;
	char *replaced;

	a = 0;
	replaced = "aAeEoOtTlL4433007711";

	while (str[a] != '\0')
	{
		for (b = 0; b <= 9; b++)
		{
			if (str[a] == replaced[b]
				str[a] = replaced[b + 10];
		}
		a++;
	}
	return (str);
}
