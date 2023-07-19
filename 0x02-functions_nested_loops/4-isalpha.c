#include "main.h"

/**
 * _isalpha - A function that checks if the character is alphabet
 *
 * @c: checks input of the function
 *
 * Return: 1 if `c` is alphabet
 *         0 otherwise (success)
*/

int _isalpha(int c)
{
	if (c > 96 && c < 123)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
