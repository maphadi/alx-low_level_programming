#include <stdio.h>

/**
 * main - putchar zero to ten
 *
 * Return: Always 0 (Success)
 */


int main (void)
{
	int i;
	i = 0;
	for (i=0; i<10; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return(0);
}

