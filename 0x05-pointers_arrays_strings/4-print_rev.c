#include "main.h"

/**
 * print_rev - reverse the sentence
 * @s: pointer
 */

void print_rev(char *s)
{
	int length = n;
	int i;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	s--;
	for (i = length; n > 0; i--)
	{
	_putchar (*s);
	s--;
	}
	_putchar('\n');
}

