#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character ch to stdout
 * @ch: The character to print
 *
 * Return: on success 1
 *         on error  -1 is returned
*/

int _putchar(char ch)
{
        return (write(1, &ch, 1));
}
