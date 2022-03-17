#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: character to be checked
 * Return: 1 if uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
