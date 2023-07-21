#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
*/

void more_numbers(void)
{
	int num, row, count;

	for (row = 1; row < 11; row++)
	{
		for (count = 0; count < 15; count++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
