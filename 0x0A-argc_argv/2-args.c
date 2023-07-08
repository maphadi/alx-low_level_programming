#include <stdio.h>
#include "main.h"		
/**
 * Write a program that multiplies two numbers.
 * Return: Always 0 (Success)		
 */

int main(int argc, char *argv[])		
{		
	int i;

	for (i = 0; i < argc; i++)	
	{
	printf("%s\n", argv[i]);	
	}
	return (0);		
}

