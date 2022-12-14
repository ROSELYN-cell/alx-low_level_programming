#include "main.h"
#include <stdio.h>
int is_divisible(int num, int div);

/**
 * is_divisible - checks if number is divisible
 * @num: the number to be checked
 * @div: the divisor
 * Return: 0 - it the number is divisible
 * and 1 - if the number is not divisible
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}
