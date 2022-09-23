#include "main.h"

/**
 * _strcat - concatanate two string
 * @dest: an input sstring
 * @src: an input string
 * Result: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;
	
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (tmp);
}
