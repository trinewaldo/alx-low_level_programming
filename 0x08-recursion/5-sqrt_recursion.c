#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt_recursion(int n)
{
float top = sqrt(n);

if (n < 0)
{
return (-1);
}
else if(top -(int)top > 0)
{
return (-1);
}
return top;
}
