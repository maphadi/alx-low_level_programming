#include "main.h"

/*
 * _islower - function that checks for lowercase character
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);
	else
		return (0);
}

