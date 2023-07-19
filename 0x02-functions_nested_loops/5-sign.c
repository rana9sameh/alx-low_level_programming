#include "main.h"

/**
 * print_sign - A function that checksthe sign of n
 *
 * @n: checks input of the function
 *
 * Return: 1 if n is greater than 0
 *         0 if n is equal to 0 (success)
 *        -1 if n is less than 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
