#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main-alphabet in lowercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
