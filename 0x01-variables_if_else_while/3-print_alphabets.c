#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints lower and upper case alphabets
 *
 * Return: 0 (success)
*/

int main(void)
{
	char lower = 97;
	char upper = 65;

	while (lower < 123)
	{
		putchar(lower);
		lower++;
	}
	while (upper < 91)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
