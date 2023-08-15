#include "main.h"
/**
 *jack_bauer - heb nadya w heb lolo
 *
 * Return: returns 1 if 'c' is lowercase
 *              otherwise always (0) success
 */

void jack_bauer(void)
{
int hr, min;
for (hr = 0; hr <= 23; hr++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hr / 10) + '0');
_putchar((hr % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
return (0);
}
