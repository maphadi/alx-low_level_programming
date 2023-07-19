#include "main.h"

/**
 * puts2 - print in two's
 * @str: pointer to printing string
 */

void puts2(char *str)
{
	int length = 0;
	int t = 0;
	int i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (i = 0 ; i <= t ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}

