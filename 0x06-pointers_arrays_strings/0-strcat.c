#include "main.h"
/**
 * strcat - Concatenates the string pointed to by src
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be apppended
 * Return: A pointer to the destinated string
 */
char *_strcat(char *dest, char *src);
{
	int index = 0; 
	int dest_len = 0;

	while (dest[index])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest)
}
