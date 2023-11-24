#include <unistd.h>

/**
 * _putchar - a function to stdout
 * @c: a char to print
  * Return: On success 1.
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

