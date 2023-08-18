#include <main.h>

/**
 * print_square - checks if the letter is uppercase or not
 *
 * @size: mlksh dawaa
*/

void print_square(int size)
{
int i, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i < size; i++)
{
for (k = 1; k <= size; k++)
_putchar('#');
_putchar('\n');
}
}
}
