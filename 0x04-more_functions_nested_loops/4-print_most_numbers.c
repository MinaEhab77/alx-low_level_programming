#include "stdio.h"

/**
 * print_most_numbers - checks if the letter is uppercase or not
*/
void print_most_numbers(void)
{
int i;

for (i = '0'; i < '9'; i++)
if (i != '2' && i != '4')
_putchar(i);
_putchar('\n');
}
