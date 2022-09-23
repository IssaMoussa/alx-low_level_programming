#include "main.h"

/**
 * _strncpy: a function that copy strings
 * @dest: an input string
 * @src: an input string
 * n: an integer
 * Result: a pointer to a resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp_dest = dest, *tmp_src = src;

	while(*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = tmp_src;

	for (; i < n; i++)
		*dest = *src;

	return (tmp_dest);
}
