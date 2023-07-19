#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints the sum of
 * all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (success)
*/

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1025; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
