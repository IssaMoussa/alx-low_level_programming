#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	char mot[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		putchar(mot[i]);
	printf("\n");

	return (0);
}
