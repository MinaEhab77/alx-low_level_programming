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
char *s;

if (str == NULL)
	return (NULL);
for (size = 0; str[size] != '\0'; size++)
;
s = malloc(size * sizeof(*str) + 1);
if (s == NULL)
	return (NULL);
else
{
	for (i = 0; i < size; i++)
	s[i] = str[i];
}
return (s);
}
