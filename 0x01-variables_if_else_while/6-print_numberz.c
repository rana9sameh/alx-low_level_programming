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
	char num [10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int n = 0;

	while (num[n] <= 9)
	{
		putchar(num[n]);
		n++;
	}
	putchar('\n');
	return (0);
}

