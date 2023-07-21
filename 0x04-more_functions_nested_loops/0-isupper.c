#include <main.h>

/**
 * _isupper - A function that checks if c is upper
 *
 * @c: checks input of the function
 *
 * Return: 1 if `c` is uppercase 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
