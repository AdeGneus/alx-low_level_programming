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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}
