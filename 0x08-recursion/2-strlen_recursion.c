#include "main.h"

/**
 * Write a function that returns the length of a string.
 *
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
	len++;
	len += _strlen_recursion(s + 1);
	}

	return (len);
}

