#include "main.h"

/**
 * Funtion to swap two values
 *
 * gets two int parameters and swaps them.
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
