#include "main.h"

/**
 * _strlen - length of sting
 * @s: value of s
 */

int _strlen(char *s)
{

	int length = 0;

	for (; *s != '\0'; s++)
	{
	length++;
	}
	return (length);
}

