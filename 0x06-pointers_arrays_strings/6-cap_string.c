#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string to be transformed
 * Return: pointer to the string
 */
char *cap_string(char *str)
{
	int b;

	b = 0;

	while (str[b] != '\0')
	{
		switch (str[b])
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
			if (str[b + 1] >= 97 && str[b + 1] <= 122)
				str[b + 1] -= 32;
			break;
			default:
			break;
		}
		b++;
	}
	return (str);
}
