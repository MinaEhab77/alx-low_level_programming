#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: C code using "puts" function to print a one statment
 *
 * Return: always 0 which means (Success)
**/


int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of a int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
printf("size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
