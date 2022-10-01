#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, h;

	for (i = 0; s[i]; i++)
	{
		for (h = 0; accept[h]; h++)
		{
			if (s[i] == accept[h])
				break;
		}
		if (accept[h])
			return (s + i);
	}
	return (0);
}
