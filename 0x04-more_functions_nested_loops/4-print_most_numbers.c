#include "main.h"

/**
 * print_most_numbers - check
 * do not pritnt 2 and 4
 * followed by a new line
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
