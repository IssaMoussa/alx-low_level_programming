#include "main.h"

/**
 * leet -  a  function that encode a string into 1337
 * @s: an input string
 * Return: an encode string
 */

char *leet(char *s)
{
	int i = 0, j;
	char str_int[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str_char[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while(s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str_char[j])
				s[i] = str_int[j];

		}
		
		i++;
	}

	return (s);
}
