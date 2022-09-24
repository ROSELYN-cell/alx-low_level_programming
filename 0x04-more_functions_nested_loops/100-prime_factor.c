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

/**
 * largest_prime_factor - finds and prints the
 * largest prime factor
 * @num: number to find
 */
void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/*first divide with the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/*num must be odd , proceed to nect prime number(plus two)*/
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
