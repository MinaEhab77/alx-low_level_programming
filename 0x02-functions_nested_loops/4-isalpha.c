#include "main.h"
/**
 * _isalpha- heb nadya w heb lolo
 *
 * @c: checks the input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *              otherwise always (0) success
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
return (0);
}
