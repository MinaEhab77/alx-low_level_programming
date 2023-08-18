#include "main.h"

/**
 * print_line - checks if the letter is uppercase or not
 *
 * @n: input variable
*/
void print_line(int n)
{
int k;
if (n <= 0)
_putchar('\n');
else
{
for (k = 1; k <= n; k++)
_putchar('_');
_putchar('\n');
}
}
