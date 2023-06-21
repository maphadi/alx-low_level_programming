#include <stdio.h>

/**
 * main - a-z A-Z
 *
 * Return: Always 0 (Success)
*/


int main(void) 
{ 
	char s2[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	int i; 
	for (i=0; i<52; i++)
	{
	putchar(s2[i]);
	}
	putchar('\n');			
	return(0);		
}

