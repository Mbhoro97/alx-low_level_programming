#include "main.h"
/**
 * _puts - Prints a string, follewed by a new line, to stdout
 * @str: String to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putcar(*str++);
	}
	_putcar('\n');
}
