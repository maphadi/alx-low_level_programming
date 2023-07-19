#include "main.h"

/**
 * print_array - print numbers in array
 * @a: pointer to items in array
 * @n: number of items in array
 */

void print_array(int *a, int n)
{
	int j, m;

	m = n - 1;
	for (j = 0; j <= m; j++)
	{
	printf("%d, ", a[j]);
	}
	printf ("\n");
}

