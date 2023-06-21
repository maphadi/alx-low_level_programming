#include <stdio.h>

/**
 * main - a-z A-Z
 *
*/


int main(void) 
{ 
	char s2[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	int i; 
	for (i=0; i<26; i++)
	{
	putchar(s2[i]);
	}
	for (i=26; i>26 && i<56; i++)
	{
	putchar(s2[i]);
	}
			
			
			
			
			
			
	return(0);		
}
