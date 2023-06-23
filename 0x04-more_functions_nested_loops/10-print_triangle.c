#include "main.h"
/**
 *triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int j;
	int k;

	for (j = 1; j <= size; j++)
	{
		for (k = j; k < size; k++)
		{
		_putchar(' ');
		}
		for(k = 1; k <= j; k++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
	}
}
