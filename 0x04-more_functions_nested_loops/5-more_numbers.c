#include "main.h"

/**
 * more_numbers - checks if the letter is uppercase or not
 *
 * Return: 0 if not upper and 1 if upper
*/

void more_numbers(void)
{
	int i, k, j;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			j = k;
			
			if (k > 9)
			{
				_putchar(1 + 48);
				j = k % 10;
			}
			_putchar(j + 48);
		}
	_putchar('\n');
	}
}
