#include <stdio.h>
/**
 * main - prints the lowecase alphabet in revese
 * followed by new line
 * Return: Always 0 (Succesful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
