#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
int size, i;
char *strr;

if (str == NULL)
return (NULL);

for (size = 0; str[size]; size++)
;

strr = malloc(size * sizeof(*str) + 1);

if (strr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
{
strr[i] = str[i];
}
}
return (strr);
}
