#include "main.h"

/**
 * get_endianness - it is a function to check endianness.
 * Return: gives  0 on big endian ||  1 if little endian
 */
int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;
	return (*y);
}

