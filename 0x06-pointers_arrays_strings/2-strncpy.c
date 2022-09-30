#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string.
 * should work exactly like strncpy
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max number of byte copied
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
