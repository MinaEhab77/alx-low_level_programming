#include "main.h"
/**
 * print_sign - heb nadya w heb lolo
 *
 * @n: checks the input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *              otherwise always (0) success
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
