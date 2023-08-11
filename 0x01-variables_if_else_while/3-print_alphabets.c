#include <stdio.h>



/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        char ch = 'a';
        char CH = 'A';
        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
        while (CH <= 'z')
        {
                putchar(CH);
                CH++;
        }
        putchar('\n');

        return (0);
}
