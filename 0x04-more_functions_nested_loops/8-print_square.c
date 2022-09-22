#include "main.h"
/**
 * print_square - print a square
 * with the charater #
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i;

	int h;

	i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			i++;
			_putchar('\n');
		}
	}
}
