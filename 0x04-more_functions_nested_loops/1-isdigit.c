#include "main.h"

/**
 * _isdigit - checks if the letter is uppercase or not
 *
 * @c: input for alphabet
 *
 * Return: 0 if not upper and 1 if upper
*/

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
