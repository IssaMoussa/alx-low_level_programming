#include "main.h"

/**
 * print_square - draw square
 * followed by a new line
 * @n: an input integer
 * Return: nothing
 */

void print_square(int n)
{
	int i = 0, j = 0;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
