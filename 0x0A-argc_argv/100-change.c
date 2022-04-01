#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int coin, change, i, money;
	int coins[5] = {25, 10, 5, 2, 1};

	change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coin = atoi(argv[1]);
	if (coin <= 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (coin != 0)
			{
				money = coin / coins[i];
				coin -= money * coins[i];
				change += money;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
