#include <main.h>

/**
 * print_diagonal - checks if the letter is uppercase or not
 *
 * @n: mlksh dawaa
*/

void print_diagonal(int n)
{
int i, k;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i < n; i++)
{
for (k = 1; k <= i; k++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}

