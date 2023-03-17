#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checking if positive or negative and then print the message
 * Return: if n greater than zero print positive, else negative
 */
int main(void)

{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if n  >  0

		{
				printf("is positive");

		} else

		{
				printf("is negative");

		}
		return (0);
}
