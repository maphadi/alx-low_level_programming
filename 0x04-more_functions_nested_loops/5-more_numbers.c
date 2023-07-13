#include "main.h"

/**
 * more_numbers - print 1 to 14 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar (i);
		}
		_putchar('\n');
		j++;
	}
}

