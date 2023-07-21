#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal
 *
 * @n: The number of times the _ character should be printed
*/

void print_line(int n)
{
	int lchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lchar = 1; lchar <= n; lchar++)
			_putchar('_');
		_putchar('\n');
	}
}
