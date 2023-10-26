#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to units
 *
 * @b: binary parameter received.
 * Return: zero if invalid charecter is passed,
 * otherwise result of the conversion.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			result = result * 2 + 0;
		}
		else if (b[i] == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
