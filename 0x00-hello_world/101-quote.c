#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Using write function and an array to print a statement
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, quote, 59);
	return (1);
}
