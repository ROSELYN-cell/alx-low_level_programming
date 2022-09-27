#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints a string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int n, len = _strlen(str);

	for (n = ((len - 1) / 2) + 1; n < len; n++)
		putchar(*(str + n));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of given string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
