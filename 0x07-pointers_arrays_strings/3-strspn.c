#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to check
 * @accept: string to compare
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, h;

	for (i = 0; s[i]; i++)
	{
		for (h = 0; accept[h]; h++)
		{
			if (s[i] == accept[h])
				break;
		}
		if (!accept[h])
			break;
	}
	return (i);
}
