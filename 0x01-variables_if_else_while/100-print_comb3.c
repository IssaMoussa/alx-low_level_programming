#include<stdio.h>
#include<stdlib.h>

/**
 *
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	int number;
	int d;

	for (number = '0'; number < '9'; number++)
	{
		for (d = number + 1; d <= '9'; d++)
		{
			putchar(number);
			putchar(d);
			if (d == '8')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
