#include <stdio.h>
#include <stdlib.h>

/**
 * checknumber - verifies if string has only numbers
 * @s: string to check
 * Return: 1 if only numbers, 0 otherwise
 **/

int checknumber(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 0 && s[i] <= 9)
			return (0);
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: arguments entered
 * Return: sum of numbers, 0 if no arg is passed, 1 if non-integer is passed
 **/

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (checknumber(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
