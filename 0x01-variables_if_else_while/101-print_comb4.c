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
int i = 0, k = 0, s;
while (i < 10)
{
k = 0;
while (k < 10)
{
s = 0;
while (s < 10)
{
if (i != k && i < k && k != s && k < s)
{
putchar(i + '0');
putchar(k + '0');
putchar(s + '0');
if (i + s + k != 24)
{
putchar(',');
putchar(' ');
}
}
s++;
}
k++;
}
i++;
}
putchar('\n');
return (0);
}
