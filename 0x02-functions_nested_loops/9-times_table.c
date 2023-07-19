#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar(48);
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/**
			 * put space if product is a single number
			 * place the first digit if there are two numbers
			*/
			if (prod < 10)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /* get the first digit */
			_putchar((prod % 10) + 48); /* get the second digit */
		}
		_putchar('\n');
	}
}

