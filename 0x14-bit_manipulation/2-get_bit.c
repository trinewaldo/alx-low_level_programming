#include <stdio.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The unsigned long int number to retrieve the bit from
 * @index: The index of the bit to retrieve (starting from 0)
 *
 * Return: return erro value (-1) if index is out of range, otherwise...
 * The value of the bit at the specified index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int meski = 1UL << index;
	int biti = (n & meski) ? 1 : 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (biti);
}
