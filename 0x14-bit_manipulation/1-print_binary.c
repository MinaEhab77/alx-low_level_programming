#include "main.h"
/**
 * _pow - it is a function to calculate(base^power).
 * @base: its the base of the exponential
 * @power:its the  power of the exponential
 * Return: the value (base^power).
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
	{
		num *= base;
	}
	return (num);
}

/**
 * print_binary - its ia a function to print number in binary
 * @n: a number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
			_putchar('0');
		divisor >>= 1;
	}
}

