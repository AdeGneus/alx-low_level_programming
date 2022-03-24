#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be transformed
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	int a, b;

	b = 0;

	while (str[b] != '\0')
		b++;

	for (a = 0; a < b && str[a] != '\0'; a++)
	{
		switch (str[a])
		{
			case '\t':
			case ' ':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			if (str[a + 1] >= 97 && str[a + 1] <= 122)
				str[a + 1] -= 32;
			break;
			default:
			break;
		}
	}
	return (str);
}
