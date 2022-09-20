#include<stdio.h>
#include<stdlib.h>

/**
 * main -entry
 *
 * Return: 0
 */

int main(void)
{
	int n, d;

	for (n = 0; n <= 98; n++)
	{
		for (d = n + 1; d <= 98; d++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (n == 98 && q == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
