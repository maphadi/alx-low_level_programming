#include "main.h"

/*
 * Write a function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 */

int _strlen(char *s)
{

	int length = 0;

	while (*s != '\0')
	{
	length++;
	s++;
	}
	return (length);
}

