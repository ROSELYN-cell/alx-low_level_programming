#include "main.h"
/**
 * print_diagonal - print a diagonal if the number is positive
 * @n: counted character
 * Return: to the value of c
 */
void print_diagonal(int n)
{
	int i;

	int h;

	if (n <= 0)

	{
		_putchar('\n');
	}
	else
	{
		_putchar('\\');
		_putchar('\n');
		for (i = 0; i < (n - 1); i++)
		{
			for (h = i; h >= 0; h--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
