#include "main.h"

/**
 * _isalpha - check entry
 * @c: input character
 * Description: return 1 if the character is letter, 0 otherwise
 * Return: 1 or 0
 */

int _isalpha(char c)
{
	char low, up;
	int isletter = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; up <= 'Z'; up++)
		{
			if (c == low or c == up)
			{
				isletter = 1;
			}
		}
	}

	return (isletter);
}
