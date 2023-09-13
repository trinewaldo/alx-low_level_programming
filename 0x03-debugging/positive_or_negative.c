#include "main.h"

/**
 * positive_or_negative - Determines if an integer is +ve, -ve, or 0.
 * @i: The integer to check.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else
	{
	printf("%d is zero\n", i);
	}
}
