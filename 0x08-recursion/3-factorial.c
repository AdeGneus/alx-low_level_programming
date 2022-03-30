#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: number whose factorial is to be computed
 * Return: factorial of the number or -1 if less than 0
*/
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (-1);
}
