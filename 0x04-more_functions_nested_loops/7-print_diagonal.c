#include "main.h"

/**
 * print_diagonal - function that draw diagonal line
 * @n: an input integer
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
