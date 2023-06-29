#include "main.h"

/*
 *Write a function that copies a string.
 *Prototype: char *_strncpy(char *dest, char *src, int n);
 *Your function should work exactly like strncpy
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

