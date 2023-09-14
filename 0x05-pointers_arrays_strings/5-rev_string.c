#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
int i = 0;
while(s[i])
{
i++;
}

while(i--)
{
putchar(s[i]);
}
}
