#inlude "main.h"

/**
 * string_toupper: change all lowercase letters of a string
 * to upper case
 * @s: an input string
 * Return: char pointer to new sting upper case
 */

char *string_toupper(char *s)
{
	char *tmp = s;

	while(*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;

		*s++;
	}

	return (tmp);
}
