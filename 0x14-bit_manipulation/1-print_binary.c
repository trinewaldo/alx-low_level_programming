#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The unsigned long int number to print in binary
 *
 * Return: None
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) *8 - 1);
	int flag = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			printf("1");
			flag = 1;
		}
		else if (flag)
		{
			printf("0");
		}
		mask >>= 1;
	}
}
