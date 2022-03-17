#include "main.h"

/**
 * print_square - print a square according to the size
 * @size: dimensions of square
 * Return: nothing
 */

void print_square(int size)
{
	int i, j;

	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
