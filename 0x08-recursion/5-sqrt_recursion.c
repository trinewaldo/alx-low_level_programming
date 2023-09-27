#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if(sqrt(n) -(int)sqrt(n) > 0)
{
return (-1);
}
return (sqrt(n));
}
