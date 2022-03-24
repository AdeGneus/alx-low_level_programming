#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int m, temp;

	for (m = 0; m < n; m++)
	{
		temp = a[n - 1];
		a[n - 1] = a[m];
		a[m] = temp;
		n--;
	}
}
