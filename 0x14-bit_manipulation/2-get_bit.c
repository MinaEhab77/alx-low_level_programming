#include"main.h"

/**
 * get_bit - it is a function which returns value of bit at given index
 * @n: it is a number to be checked
 * @index: an index
 * Return: the value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
	{
		return (1);
	}
	return (0);
}

