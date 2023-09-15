#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
char *dest_ptr = dest;
int i = 0;
while(*dest != '\0')
{
i++;
dest++;
}

char *src_ptr = src;
int j;
while(*src != '\0')
{
j++;
src++;
}
int x = 0;
for(x = 0; x <= j; x++)
{
dest_ptr[i + x] = src_ptr[x];
}

return dest_ptr;
}
