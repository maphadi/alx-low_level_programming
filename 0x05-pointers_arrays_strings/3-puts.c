#include "main.h"

/*
 *Write a function that prints a string, followed by a new line, to stdout.
 *Prototype: void _puts(char *str);
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar (*str++) ;
	}
	_putchar ('\n');
}

