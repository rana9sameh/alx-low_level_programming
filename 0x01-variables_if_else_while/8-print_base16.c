#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints hexadecimal
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
	if (n > 9)
	{
		while (n < 16)
		{
			putchar(87 + n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
