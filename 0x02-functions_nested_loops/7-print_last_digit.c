#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of n
 *
 * @n: the  input of the function
 *
 * Return: lD the last digit
*/

int print_last_digit(int n)
{
	int lD;

	if (n < 0)
		lD = (-1) * n % 10;
	else
		lD = n % 10;
	return (lD);
}

