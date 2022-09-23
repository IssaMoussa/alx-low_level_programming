#include "main.h"

/**
 * print_last_digit - check
 * @n: input number
 * Description: print the last digit of a number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int numb;

	if (n < 0)
		numb = -1 * (n % 10);
	else
		numb = n % 10;

	_putchar((numb % 10) + '0');

	return (numb % 10);
}
