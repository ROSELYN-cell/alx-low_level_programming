#include "main.h"
/**
 * _isalpha - check for uppercase character
 * @c: for argument of the fuction
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
