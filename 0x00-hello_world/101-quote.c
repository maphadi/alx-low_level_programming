#include <stdio.h>

/*
 *print without using printf or puts
 *Return : 1
 */

int main (void)
{
	char a[63] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char *p;
	p = &a;

	putchar (*p);
	return(1);
}
