#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * followed by a new line
 * Use printf with the offset specifier to print the last half of the string
 */

void puts_half(char *str)
{
int length = strlen(str);
int halfLength = length / 2;

printf("%s\n", str + halfLength);
}
