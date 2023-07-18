#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program prints lowercase alphabets in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	char alpha = 122;

	while (alpha > 96)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
