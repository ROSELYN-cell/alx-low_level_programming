#include <stdio.h>
/**
 * main - all possible different combinations of 3 digits
 *
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int f_d;
	int m_d;
	int i_d;

	while (c <= 999)
	{
		f_d = (c / 100 + '0');
		m_d = (c / 10 % 10 + '0');
		i_d = (c % 10 + 'o');

		if ((f_d < m_d) && (m_d < i_d))
		{
			putchar(f_d);
			putchar(m_d);
			putchar(i_d);

			if (c != 789)
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

