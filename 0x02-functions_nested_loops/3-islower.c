#include "main.h"

/**
 * _islower - A function that checks if the character is lowercase
 *
 * @c: checks input of the function
 *
 * Return: 1 if `c` is lowercase
 *         0 otherwise (success)
*/

int _islower(int c)
{
	if (c > 98 && c < 123)
	       return (1);
	return (0);
}

