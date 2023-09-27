#include "main.h"
#include <stdio.h>

 /**
 * Function that returns factorial of a number
 */
int factorial(int n)
{
if(n < 0)
return -1;
if(n == 0)
return 1;
return n*fcactorial(n - 1);
}
