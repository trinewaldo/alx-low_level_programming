#include <stdio.h>

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the unsigned long int number in which to set the bit
 * @index: The index of the bit to set (starting from 0)
 *
 * Return: 1 if the bit was successfully set, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	*n |= mask;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	return (1);
}
