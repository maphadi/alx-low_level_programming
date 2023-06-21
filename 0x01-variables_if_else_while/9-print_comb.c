#include <stdio.h>

/**
 * main - small letters
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char s1[26] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";
	int i;

	for ( i = 0; i < 26; i++)
	{
	putchar (s1[i]);
	}
	putchar ('\n');
	return(0);
}

