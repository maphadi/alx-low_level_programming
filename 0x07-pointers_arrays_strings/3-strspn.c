#include "main.h"

/**
 * Write a function that gets the length of a prefix subst
 * Returns the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	i = 0;
	unsigned int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
		if (*s == accept[r])
		{
			i++;
			break;
		}
		else if (accept[r + 1] == '\0')
		return (i);
	}
	s++;
	}
	return (i);
}

