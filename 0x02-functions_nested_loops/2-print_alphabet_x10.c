#include "main.h"
/**
 * print_alphabet_x10 - print a to z 1o times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; c <= 9; i++)
	{
		for (c = 'a'; c = 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}