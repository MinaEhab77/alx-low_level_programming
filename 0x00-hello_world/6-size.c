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
printf("Size of a char: %lu byte(s)\n" sizeof(char));
printf("Size of a int: %lu byte(s)\n",sizeof(int));
printf("Size of a long int: %lu byte(s)\n",sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n",sizeof(long long int));
printf("size of a float: %lu byte(s)\n",sizeof(float));
return (0);
}
