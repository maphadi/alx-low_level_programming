#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > c && c > b)
	{
	largest = a;
	}
	else if (c > b)
	{
	largest = b;
	}
       	else
	{
	largest = b;
	}

	return (largest);
}
