#include "main.h"

/**
 * _islower - checks whether a character is lowercase or not.
 *
 * @c: character to be checked if lowercase, type int
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
