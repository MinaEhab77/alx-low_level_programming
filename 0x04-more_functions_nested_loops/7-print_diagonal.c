#include <main.h>

/**
 * print_diagonal - checks if the letter is uppercase or not
 *
 * Return: 0 if not upper and 1 if upper
*/

void print_diagonal(int n)
{
int i, k;
if (n <= 0)
putchar('\n');
else
{
for (i = 1; i < 13; i++)
{
for (k = 1; k <= i; k++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
