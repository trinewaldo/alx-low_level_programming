#include "main.h"
#include <stdio.h>

/**
 * Function that returns the value of x raised to power y
 * Error: Power lower than 0
 * Base case: any number raise to 0 is 1
 * x raised to power y
 */
int _pow_recursion(int x, int y)
{
    if (y < 0) {
        return -1;
    }
    if (y == 0) {
        return 1;
    }
    return x * _pow_recursion(x, y - 1);
}
