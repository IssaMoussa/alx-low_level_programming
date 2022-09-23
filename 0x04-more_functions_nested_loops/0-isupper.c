#include "main.h"

/**
 * _isupper - check
 * @c: an input character
 * Return: 1 if c is upper case 0 otherwise
 */

int _isupper(char c)
{
	char up_case = 'A';
	int is_upper = 0;

	for (; up_case <= 'Z'; up_case++)
	{
		if (c == up_case)
		{
			is_upper = 1;
			break;
		}
	}

	return (is_upper);
}
