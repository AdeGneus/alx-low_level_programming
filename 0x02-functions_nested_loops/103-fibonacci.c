#include "main.h"
#include <stdio.h>

/**
 * main - print sum of all even fibonacci numbers under 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long x, y, z, sum;

	x = z = sum = 0;
	y = 1;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
	return (0);
}
