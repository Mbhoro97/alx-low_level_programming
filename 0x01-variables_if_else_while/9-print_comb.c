#include <stdio.h>
/**
 * main - Prints all possible combination of single-digit numbers
 * Return: Always 0 (Succesfu)
 */
int main(void)
{
	int i;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
