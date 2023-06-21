#include <stdio.h>

/**
 * main - a-z A-Z
 *
*/


int main(void) 
{ 
	char s2[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	int i; 
	for (i=0; i<52; i++)
	{
	putchar(s2[i]);
	}
			
	return(0);		
}

