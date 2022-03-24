#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: pointer to the string
 */
char *rot13(char *str)
{
	int a;
	char *replaced;

	replaced = "NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm";

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 65 && str[a] <= 122)
			str[a] = replaced[str[a] - 65];
	}
	return (str);
}
