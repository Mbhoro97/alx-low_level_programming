#include <unistd.h>

/**
 *_putchar - write the character c to stdout
 * @c: The character to print
 * Return 1 if is true else 0
 *  On error return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
