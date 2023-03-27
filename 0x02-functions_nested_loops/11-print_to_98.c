#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from input to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d. ", n--1);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
	}
}
