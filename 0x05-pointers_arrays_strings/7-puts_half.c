#include "main.h"

/**
 * puts_half - finally
 * @str: knowledge
 */

void puts_half(char *str)
{
	int len = 0;
	int t = 0;
	char *x = str;
	int n, m, p, j;

	while (*x != '\0')
	{
	x++;
	len++;
	}
	t = len - 1;
	m = (t / 2) + 1;
	p = ((len + 1) / 2);
	if (t % 2 == 0)
	{
		for (n = m; n <= t; n++)
		{
		_putchar (str[n]);
		}
	}
	else
	{
			for (j = p; j <= t; j++)
			{
			_putchar (str[j]);
			}
	}
	_putchar ('\n');
}

