#include "main.h"

/**
 * flip_bits - it is a function which counts number of bits changed
 * @n: a 1st num
 * @m: 2nd num
 * Return: gives numb of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count_bit = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		curr = exc >> k;
		if (curr & 1)
		{
			count_bit++;
		}
	}
	return (count_bit);
}

