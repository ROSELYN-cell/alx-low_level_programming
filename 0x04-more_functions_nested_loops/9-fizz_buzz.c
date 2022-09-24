#include "main.h"
#include <stdio.h>
/**
 * main - print numbers 1 - 100
 * followed by a new line
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multiples of both 3 and 5 print FizzBuzz
 * seperate each number and word by a space
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
