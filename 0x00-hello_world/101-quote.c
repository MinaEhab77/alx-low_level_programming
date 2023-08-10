#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: C code using "puts" function to print a one statment
 *
 * Return: always 1(error).
 *
 *
**/



int main(void)
{	char mia[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, mia, 59);
	return (1);
}
