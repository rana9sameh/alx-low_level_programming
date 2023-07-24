#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line
 *
 * @s: char parameter
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
