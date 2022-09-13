#include "main.h"
#include <stdio.h>
/**
 * _abs - print a fucntion that computes the absolute value of a function
 * @c: for function arguments
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
