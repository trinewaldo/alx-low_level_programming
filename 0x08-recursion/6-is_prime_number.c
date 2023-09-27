#include "main.h"
#include <stdio.h>

int is_divisible(int n, int divisor)
{
if (divisor == 1)
{
return 0;
}
if (divisor == 2)
{
return (n % 2 == 0) ? 1 : 0;
}
if (n % divisor == 0)
{
return 1;
}
return is_divisible(n, divisor - 1);
}
int is_prime_number(int n)
{
if (n <= 1)
{
 return 0;
}
if (n == 2)
{
return 1;
}
return !is_divisible(n, n - 1);
}
