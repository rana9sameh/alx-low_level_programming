#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints lowercase except e and q
 *
 * Return: 0 (success)
*/

int main(void)
{
	char lower = 97;

	while (lower < 123)
	{
		if (lower == 101)
			lower++;
		if (lower == 113)
			lower++;
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
