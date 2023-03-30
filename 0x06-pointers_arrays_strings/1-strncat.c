#include "main.h"
/**
 * _strncat - Concatenates two strings using most inputted number of bytes
 * @dest: The string to be appended upon
 * @src: The string to be appended to destination
 * @n: The number of bytes from src to be appended to destination
 * Return: The string appended to dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index > n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
