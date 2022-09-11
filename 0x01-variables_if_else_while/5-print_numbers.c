#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main-all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
