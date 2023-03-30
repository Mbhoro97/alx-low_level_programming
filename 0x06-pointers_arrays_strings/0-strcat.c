#include "main.h"
/**
 * strcat - Concatenates the string pointed to by src
 * @dest: A pointer to the string to be concatenated
 * @src: The source string to be apppended
 * Return: A pointer to the destinated string
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

