#include "main.h"
#include <stdio.h>
/**
 * print_number -  prints an integer
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int c, f, count;

	if (n < 0)
	{
		_putchar(45);
		c = n * -1;
	}
	else
	{
		c = n;
	}

	f = c;
	count = 1;

	while (f > 9)
	{
		f /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((c / count) % 10) + 48);
	}
}
