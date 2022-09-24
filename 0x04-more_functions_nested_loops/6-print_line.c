#include "main.h"

/**
 * print_line - draws straigth line
 * followed by a new line
 * @n:an input integer
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;
	
	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
