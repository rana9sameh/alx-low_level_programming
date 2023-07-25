#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: the first parameter
 * @src: the second parameter
 *
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
