#include "main.h"
/*
 * Write a function that swaps the values of two integers.
 * Prototype: void swap_int(int *a, int *b);
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

