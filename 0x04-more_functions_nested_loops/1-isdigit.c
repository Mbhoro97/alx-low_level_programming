#include "main.h"
/**
 *_isdigit - Checks if the parameter is a number between 0 to 9.
 * @c: input number.
 * Return: returns 1 if the number between 0 to 9 or else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);		
	}
}	
