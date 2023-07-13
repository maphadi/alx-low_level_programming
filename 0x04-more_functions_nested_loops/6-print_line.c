#include "main.h"

/**
 *
 * print_line - draw a straight line
 * @n: number of times _ should draw
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
		_putchar ('_');
		}
		_putchar ('\n');
	}
}
