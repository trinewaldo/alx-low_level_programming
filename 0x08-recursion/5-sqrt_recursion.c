#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Recursive function to calculate the square root
 * @n: The number for which to calculate the square root
 *
 * Return: The square root of n, or -1 if there's no natural square root
 */
int _sqrt_recursion(int n)
{
int guess = 1;
if (n < 0)
{
return -1;
}

if (n == 0 || n == 1)
{
return n;
}
while (guess * guess <= n)
{
if (guess * guess == n)
{
return guess;
}
guess++;
}
return -1;
}
