#include "main.h"
/**
 * leet - encode into 1337speak
 * @s: input value
 * Return: pointer
 */

char *leet(char *s)
{
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

int i = 0;
while (*s != '\0')
{
int j = 0;

while (j < 10)
{
if (s[i] == s1[j])
{
s[i] = s2[j];
}
j++;
}
s++;
i++;
}
return (s);
}

