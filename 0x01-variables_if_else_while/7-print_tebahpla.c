#include <stdio.h>

/**
 * main -  small letters
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char s1[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar (s1[i]);
	}
	putchar ('\n');
	return (0);
}

