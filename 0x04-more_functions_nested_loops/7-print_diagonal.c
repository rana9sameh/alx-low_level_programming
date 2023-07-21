#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the termina
 *
 * @n: is the nof times that \ char should be printed
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
