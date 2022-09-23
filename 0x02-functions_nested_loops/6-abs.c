#include "main.h"

/**
 * _abs - check
 * @n: input integer
 * Desription: Return the absolute value of a number
 * Return: Abslute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
