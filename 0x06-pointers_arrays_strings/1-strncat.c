#include "main.h"

/**
 * _strncat - concatanate two string
 * @src: an input string
 * @dest: an input string
 * @n: an input int
 * Result: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp_dest = *dest, *tmp_src = *src;

	while(*src)
	{
		len++;
		src++;
	}

	while(*dest)
		dest++;

	if (n > len)
	{
		n = len;
	}

	src = tmp_src;

	for ( ; i < n; i++)
	{
		*dest ++ = *src++;
	}

	*dest = '\0';

	return (tmp_dest);
}
