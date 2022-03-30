#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: pointer to the string
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	if (s[0] != '\0')
		return (1 + _strlen_recursion(&s[1]));
	else
		return (0);
}

/**
 * palindrome - check if string is a palindrome
 * @s: string to check
 * @n: size of string -1
 * @i: counter through string
 * Return: 1 if palindrome, 0 if not
 **/

int palindrome(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	return (palindrome(s, n - 1, i + 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 **/

int is_palindrome(char *s)
{
	return (palindrome(s, _strlen_recursion(s) - 1, 0));
}
