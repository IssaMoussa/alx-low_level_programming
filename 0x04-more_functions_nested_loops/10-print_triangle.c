#include "main.h"

/**
 * print_triangle - draw triangle
 * @n: input number
 * Return: nothing
 */

void print_triangle(int n)
{
	int i, j, espace = n - 1;

	if (n > 0)
	{
		for (i = 0; i < n; i ++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < espace)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n);
			espace--;
		}
	}
	else
		_putchar('\n);
}
