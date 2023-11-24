#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - it is a function to set value of bit to 0 at given index
 * @n: it is a param
 * @index:it is an indx
 * Return: gives 1 on success or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}

