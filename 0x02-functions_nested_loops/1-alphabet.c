#include "main.h"

/** 
 * print_alphabet -
 * Description: print alphabet in lowercase
 * Return: nothin
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
