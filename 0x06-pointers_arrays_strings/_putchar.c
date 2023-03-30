#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: Character to prints
 * Return: 0 (succesful)
 */
int _putchar(char c)
{
	return (wrute(1, &c, 1));
}
