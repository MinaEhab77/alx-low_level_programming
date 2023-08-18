#include "stdio.h"

/**
 * print_most_numbers - checks if the letter is uppercase or not
*/
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
if (i != 2 && i != 4)
_putchar(i);
_putchar('\n');
}
