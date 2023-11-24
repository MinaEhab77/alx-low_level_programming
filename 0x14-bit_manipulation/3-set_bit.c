#include "main.h"

/**
 * set_bit - it is a function to set value bit to 1 at given index
 * @n: it is a number
 * @index: its is an index
 * Return: gives 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

