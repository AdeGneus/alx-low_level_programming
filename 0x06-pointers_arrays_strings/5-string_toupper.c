#include "main.h"

/**
 * *string_toupper - change lowercase letters to uppercase
 * @str: string to be transformed
 * Return: pointer to the transformed string
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
