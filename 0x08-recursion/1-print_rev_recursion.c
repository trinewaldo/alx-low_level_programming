#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* void _print_rev_recursion reverses a string
* char *s: string parameter received
*/
void _print_rev_recursion(char *s)
{
if(*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}
