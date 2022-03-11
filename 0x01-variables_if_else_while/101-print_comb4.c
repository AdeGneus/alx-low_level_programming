#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m, n, o;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				if ((m < n) & (n < o) & (o <= '9'))
				{
					putchar(m);
					putchar(n);
					putchar(o);

					if ((m + n + o) < 168)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
