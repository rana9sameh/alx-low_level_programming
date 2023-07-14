#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the sign of n
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	else if (n < 0)
		printf("is negative\n");
	else
		printf("is zero\n");
	return (0);
}
