#include<stdio.h>
#include<stdlib.h>
/*
 * main - entry 
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for(low = 'a'; low <= 'z'; low++)
		puchar(low);
	for(low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
