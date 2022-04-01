#include <stdio.h>

/**
 * main - prints arguments on a new line
 * @argc: number of arguments
 * @argv: arguments entered
 * Return: Always 0 (Success)
 **/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
