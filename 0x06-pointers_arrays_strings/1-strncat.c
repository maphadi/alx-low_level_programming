#include "main.h"

/**
 * Write a function that concatenates two strings.
 *Prototype: char *_strncat(char *dest, char *src, int n);
 *The _strncat function is similar to the _strcat
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

