#include "main.h"

/** 
 * print_alphabet - check_description
 * Description: print alphabet in lowercase fallowed by newline
 * Return: nothing
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
