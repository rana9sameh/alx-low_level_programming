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

	while (n < 9)
	{
		putchar('0' + n);
		putchar(44);
		putchar(32);
		n++;
	}
	putchar(57 + '\n');
	return (0);
}
