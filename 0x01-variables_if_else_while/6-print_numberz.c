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
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}

