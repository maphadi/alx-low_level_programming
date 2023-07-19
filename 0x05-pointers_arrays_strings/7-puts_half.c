#include "main.h"

/**
 *
 *
 */ 

void puts_half(char *str)
{
	int len = 0;
	int t = 0;
	char *x = str;
	int n;

	while (*x != '\0')
	{
	x++;
	len++;
	}
	t = len - 1;
	for (n = 5; n <=t ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

