#include "main.h"

/**
 * print_alphabet - using the _putchar function to print
 *                  the alphabets from a to z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
