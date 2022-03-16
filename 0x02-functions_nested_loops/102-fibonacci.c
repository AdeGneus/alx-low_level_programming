#include "main.h"
#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int counter;
	unsigned long x, y, z;

	x = 0;
	y = 1;

	for (counter = 1; counter <= 49; counter++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	printf("%lu\n", z + x);
	return (0);
}
