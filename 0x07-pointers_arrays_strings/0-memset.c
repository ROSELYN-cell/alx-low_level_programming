#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: points to memory area
 * @b: char
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
