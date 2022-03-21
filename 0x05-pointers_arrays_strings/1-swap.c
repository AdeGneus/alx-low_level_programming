#include "main.h"

/**
 * swap_int - swap the values of two int
 * @a: int to be swapped with the value of b
 * @b: int to be swapped with the value of a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
