#include <stdio.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the unsigned long int number in which to clear the bit
 * @index: The index of the bit to clear (starting from 0)
 *
 * Return: 1 if the bit was successfully cleared, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int msk = ~(1UL << index);
	*n &= msk;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	return (1);
}
