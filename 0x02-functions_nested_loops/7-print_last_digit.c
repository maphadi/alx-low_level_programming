#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
	_putchar (-j);
	return (-j);
	}
	else
	{
	_putchar (j);
	return (j);
	}
}

