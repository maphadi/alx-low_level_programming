#include "main.h"

/**
 * Write a function that prints n elements of an array of integers, followed by a new line.
 *Prototype: void print_array(int *a, int n);
 *where n is the number of elements of the array to be printed
 *Numbers must be separated by comma, followed by a space
 *The numbers should be displayed in the same order as they are stored in the array
 *You are allowed to use printf
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
	printf("%d, ", a[j]);
	}
	if (j == (n - 1))
		{
		printf("%d", a[n - 1]);
		}
		printf("\n");
}

