#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all the  paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters.
 * Return: the sum of all parameters and zero if n is equal to zero
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return 0;

	va_list ptr;
	int i;
	int sum = 0;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	sum = sum + va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}

