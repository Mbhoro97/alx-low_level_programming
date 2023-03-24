#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positve_or_negative - checking for number that is negative, negative or zero
 * @i: integer 
 * Return: if n greater than zero print positive, else negative
 */
void positive_or_negative(int i)

{
	if (i >  0)
	{
		printf("%d is positive\n", i);

	}
	else if (i  <  0)
	{	
		printf("%d is negative\n", i);

	}
	else
	{
		printf("%d is zero\i");
	}
}
