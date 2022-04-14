#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: num 1
 * @b: num 2
 * Return: sum of numbers
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: num 1
 * @b: num 2
 * Return: difference of numbers
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: num 1
 * @b: num 2
 * Return: product of numbers
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: num 1
 * @b: num 2
 * Return: quotient of numbers
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of numbers upon division
 * @a: num 1
 * @b: num 2
 * Return: modulus of numbers
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
