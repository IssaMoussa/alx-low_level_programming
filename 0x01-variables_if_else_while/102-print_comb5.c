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
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (n == 98 && d == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
