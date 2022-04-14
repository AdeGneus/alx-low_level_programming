#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	char *str;

	va_start(ps, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ps, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ps);
}
