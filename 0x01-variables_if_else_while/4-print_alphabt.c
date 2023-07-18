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

	while (lower < 123 && lower != 101 && lower != 113)
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
