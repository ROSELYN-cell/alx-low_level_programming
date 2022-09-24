#include <stdio.h>
/**
 * _sqrt - finds the square root
 * @s: input number
 *Return: square root of s
 */
double _sqrt(double s)
{
	float sqrt, tmp;

	sqrt = s / 2;
		tmp = 0;

		while (sqrt != tmp)
		{
			tmp = sqrt;
			sqrt = (s / tmp + tmp) / 2;
		}
		return (sqrt);
}
