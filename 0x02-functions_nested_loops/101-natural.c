#include "main.h"
#include <stdio.h>

/**
 * main - print sum of all multiples of 3 and 5 up to 1024
 *
 * @void: Empty parameter list
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
