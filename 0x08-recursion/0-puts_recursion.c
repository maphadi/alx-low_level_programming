#include "main.h"

/**
 * _puts_recursion - function like puts();
 * Write a function that prints a string, followed by a new line.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
