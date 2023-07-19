#include "main.h"

/**
 * print_alphabet_x10 - function prints the alphabets 10 times
 *
*/

void print_alphabet_x10(void)
{
	int l, ch;

	for (l = 0; l < 10; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}

