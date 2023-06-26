#include "main.h"

/**
 * Write a function that prints half of a string, followed by a new line.
 *Prototype: void puts_half(char *str);
 *The function should print the second half of the string
 *If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
 */

void puts_half(char *str)
{
	int a;
        int n; 
	int length;

	length = 0;
	for (a = 0; str[a] != '\0'; a++)	
	length++;
	n = (length / 2);
	if ((length % 2) == 1)
		n = ((length + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

