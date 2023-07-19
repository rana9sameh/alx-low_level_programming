#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints the first 50 Fibonacci numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 0;
	int i = 1;

	for (; i <= 50; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
