#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void print_rev(char *s)
{
int len = 0;

while(s[len])
{
len++;
}

char temp;
int k;

for(k = 0; k < len/2; k++)
{
temp = s[k];
s[k] = s[len - 1 - k];
s[len - 1 -k] = temp;
}
printf("%s", s);
}
