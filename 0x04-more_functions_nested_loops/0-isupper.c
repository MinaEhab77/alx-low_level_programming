#include "main.h"

/**
 * _isupper - checks if the letter is uppercase or not
 *
 * @c: input for alphabet
 *
 * Return: 0 if not upper and 1 if upper
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
