#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 * @c:characterto print
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
