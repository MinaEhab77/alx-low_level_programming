#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int i = 0, k;
while (i < 99)
{
k = 0;
while (k < 99)
{
if (i != k)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((k / 10) + '0');
putchar((k % 10) + '0');
if (i != 98 || k != 99)
{
putchar(',');
putchar(' ');
}
}
k++;
}
i++;
}
putchar('\n');
return (0);
}
