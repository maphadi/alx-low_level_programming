#include "main.h"


/**
 *upper andlower
 * Return: 1 if char is lowercase, otherwise 0.
*/


	int _isalpha(int c)
{
		if (c >= 65 && c <= 122)
			return (1);
		else
			return (0);
}

