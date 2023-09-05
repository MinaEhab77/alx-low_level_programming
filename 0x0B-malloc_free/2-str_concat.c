#include "main.h"
#include <stdlib.h>
/**
 * _strlen - get the length of the string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
int size;

for (size = 0; s[size] != '\0'; size++)
;
return (size);
}

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
int len1, len2, i;

char *q;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = _strlen(s1);
len2 = _strlen(s2);
q = malloc((len1 + len2) *sizeof(char) + 1);
if (q == NULL)
return (NULL);
for (i = 0; i <= len2; i++)
{
if (i < len1)
m[i] = s1[i];
else
m[i] = s2[i - len1];
}
return (q);
}
