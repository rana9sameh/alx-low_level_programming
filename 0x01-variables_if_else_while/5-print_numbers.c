#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints numbers from 0 to 9
 *
 * Return: 0 (success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
