#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');

	return (l);
}
