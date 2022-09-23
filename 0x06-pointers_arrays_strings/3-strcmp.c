#include "main.h"

/**
 * _strcmp: compare two string
 * @s1: an input string
 * @s2: an input string
 * Return: the difference s1 - s2
 */

char *_strcmp(char *s1, char *s2)
{
	while(*s1 && *s2)
	{
		if(*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		*s1++;
		*s2++;
	}

	return (*s1 - *s2);
}
