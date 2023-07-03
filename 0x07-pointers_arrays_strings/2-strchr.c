#include "main.h"

 /*
  * Write a function that locates a character in a string.
  * Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int k;
	k = 0;

	for (; s[k] >= '\0'; k++)
	{
	if (s[k] == c)	
		return (&s[k]);
	}
	return (0);
}

