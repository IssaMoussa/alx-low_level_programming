#include "main.h"

/**
 * print_sign - check dkdd
 * @n: input number
 * Description: function that print the sign of number
 * Return: 1 if number positive, 0 if number is 0, -1 if number negative
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
