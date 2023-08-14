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
while (i < 10)
{
k = 0;
while (k < 10)
{
if (i != k && i < k)
{
putchar(i + '0');
putchar(k + '0');
if (i + k != 17)
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
