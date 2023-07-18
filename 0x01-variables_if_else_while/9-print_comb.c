#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints from 0 to 9 separated with ,
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
		putchar(44);
		putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
