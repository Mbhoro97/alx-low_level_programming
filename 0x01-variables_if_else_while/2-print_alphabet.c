#include <stdio.h>
/**
 *main - Prints the alphabet
 * Return: Always 0 (succesful)
 */
int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);	
	}
	putchar('\n');
	return (0);
}
