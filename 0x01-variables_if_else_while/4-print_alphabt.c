#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Prints the alphabet without e and q
 * Return: Always 0 (Succesful)
 */
int main(void)
{
	int i;
	char alphat[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (i != 'q' & i != 'e')
		{
			putchar(alphat[i]);
			
		}
	}
	putchar('\n');
	return (0);
}
