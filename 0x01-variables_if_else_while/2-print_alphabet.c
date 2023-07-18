#include <stdio.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A program prints the lowercase alphabets
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char alpha = 97;

	while (alpha < 123)
	{
		putchar(alpha);
		putchar('\n');
		alpha++;
	}
	return (0);
}

