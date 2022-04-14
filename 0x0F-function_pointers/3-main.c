#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - gets input to perform operation
 * @argc: argument count
 * @argv: argument array
 * Return: result of operation if successful or error code if fails
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);
	char operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}
