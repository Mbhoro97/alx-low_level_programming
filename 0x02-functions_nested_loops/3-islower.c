#include "main.h"
/**
 * _islower-Checks if a character is lowercase
 * @c:the character 
 * Return:1 if letter is lowercase else return 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
