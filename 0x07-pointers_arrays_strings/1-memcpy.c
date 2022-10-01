#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: memory area to copy n bytes
 * @dest: memory area for the copied n bytes
 * @n: number of bytes
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
