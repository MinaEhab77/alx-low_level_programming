#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *dest_ptr = dest;
while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}
while (n > 0)
{
*dest_ptr = '\0';
dest_ptr++;
n--;
}
return (dest);
}
