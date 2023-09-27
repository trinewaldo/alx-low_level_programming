#include "main.h"
#include <stdio.h>

int helper(int n, int start, int end) 
{
int mid = (start + end) / 2;

if (start > end) 
{
        return -1;
}

    if (mid * mid == n)
    {
        return mid;
    }

    if (mid * mid > n) {
        return helper(n, start, mid - 1);
    }

    return helper(n, mid + 1, end);
}

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;
    }

    if (n == 0 || n == 1) {
        return n;
    }

    return helper(n, 0, n);
}
