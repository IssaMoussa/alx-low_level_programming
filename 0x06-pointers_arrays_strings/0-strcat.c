#include "main.h"

/**
 * _strcat: concatanate two string
 * @src: an input sstring
 * @dest: an input string
 * Result: a pointer to the resulting string
 */

char* _strcat(*src, *dest)
{
	char *tmp = dest;
	
	while (dest)
		dest++;
	while (src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
