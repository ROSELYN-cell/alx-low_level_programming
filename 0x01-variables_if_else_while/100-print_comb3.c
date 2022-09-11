#include <stdio.h>
/**
 * main - all possible different combinations of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int i_d;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		i_d = (c % 10 + '0');
		if (f_d < i_d)
		{
			putchar(f_d);
			putchar(i_d);
		if (c != 89)
		{
			putchar(',');
			putchar(' ');
		}
		}
		c++;
	}
putchar('\n');
return (0);
}
