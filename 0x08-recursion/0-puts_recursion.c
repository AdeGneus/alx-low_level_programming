#include "main.h"

/**
 * _puts_recursion - prints the characters of a string recursively
 * @s: pointer to the string
 * Return: void
*/
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
	else
		_putchar('\n');
}
