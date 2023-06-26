#include "main.h"

/*
 * Write a function that prints a string, in reverse, followed by a new line.
 * Prototype: void print_rev(char *s);
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	s--;
	for (i = length; o > 0; i--)
	{
		_putchar (*s);
		s--;
	}
	_putchar('\n');
}

