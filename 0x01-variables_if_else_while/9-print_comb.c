#include<stdio.h>
#include<stdlib.h>

/**
 * main -
 *
 * Return: 0
 *
 */

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
}
