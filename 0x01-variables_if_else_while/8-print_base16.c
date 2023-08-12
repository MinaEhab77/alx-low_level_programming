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
int ii = 0;
while (ii < 10)
{
putchar(ii + '0');
ii++;
}
int i = 0;
while (i < 6)
{
putchar(i + 'a');
i++;
}
putchar('\n');
return (0);
}
