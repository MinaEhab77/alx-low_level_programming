#include <unistd.h>
/**
 * main -Entry point
 *
 * Description: C code using "puts" function to print a one statment
 *
 * Return: always 0 which means (Success)
**/


int main(void)
{
	char sentence("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	write(0,sentenc,58);
	return (0);
}
