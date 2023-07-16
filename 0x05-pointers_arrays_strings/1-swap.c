#include "main.h"
/**
 * swap_int - exchange numbers of pointers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

