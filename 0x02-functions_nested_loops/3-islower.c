#include "main.h"
/**
 * _islower - heb nadya w heb lolo
 *
 * @c: checks the input of function
 *
 * Return: returns 1 if 'c' is lowercase
 *		otherwise always (0) success
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
return (0);
}
