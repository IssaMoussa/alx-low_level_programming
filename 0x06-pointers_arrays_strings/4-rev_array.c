#include "main.h"

/**
 * reverse_array - reverse an input array
 * @a: input array
 * @n: an integer
 * Retun: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp = 0;

	while (i < n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
