#include "main.h"
/**
 * Write a function that locates a substring.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *n = haystack;
	char *p = needle;

	while (*n == *p && *p != '\0')
	{
	n++;
	p++;
	}

	if (*p == '\0')
		return (haystack);
	}

	return (0);
}

