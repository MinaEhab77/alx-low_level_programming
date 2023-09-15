#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(const char* s1, const char* s2)
{
while (*s1 != '\0' || *s2 != '\0')
{
if (*s1 < *s2)
return -1;
else if (*s1 > *s2)
return 1;
s1++;
s2++;
}
return (0);
}
