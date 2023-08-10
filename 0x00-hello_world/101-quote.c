#include <unistd.h>
/**
 * main -Entry point
 *
 * Description: C code using "puts" function to print a one statment
 *
 * Return: always 1(error)
**/


int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(0, sentence, 58);
	return (1);
}
