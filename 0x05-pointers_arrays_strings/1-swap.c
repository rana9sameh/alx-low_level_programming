#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: first int parameter
 * @b: second int parameter
*/

void swap_int(int *a, int *b)
{
	int tem;

	tem = *a;
	*a = *b;
	*b = tem;
}
