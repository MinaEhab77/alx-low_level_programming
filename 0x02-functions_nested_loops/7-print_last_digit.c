#include "main.h"
/**
 * print_last_digit - heb nadya w heb lolo
 *
 * @a: checks the input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *              otherwise always (0) success
 */

int print_last_digit(int a)
{
int ldigit;
if (a < 0)
ldigit = -1 * (a % 10);
else
ldigit = a % 10;
_putchar(ldigit + 48);
return (ldigit);
}
